let timerInterval = null;
let startTime = null;

// Format time as "1 H - 10 Min - 15 Sec"
function formatTime(seconds) {
  const hours = Math.floor(seconds / 3600);
  const minutes = Math.floor((seconds % 3600) / 60);
  const secs = seconds % 60;
  return `${hours} H - ${minutes} Min - ${secs} Sec`;
}

// Display the live timer below the navigation bar
function displayLiveTimer() {
  const timeContainer = document.createElement("div");
  timeContainer.id = "cp-timer";
  timeContainer.style.marginTop = "20px"; // Add some space below the navigation bar
  timeContainer.style.marginLeft = "20px"; // Align with the problem name
  timeContainer.style.fontSize = "18px";
  timeContainer.style.fontWeight = "bold";
  timeContainer.style.color = "green";

  // Insert the time container below the navigation bar
  const navBar = document.querySelector(".second-level-menu"); // Codeforces navigation bar selector
  if (navBar) {
    navBar.parentNode.insertBefore(timeContainer, navBar.nextSibling);
  }

  // Update the timer every second
  timerInterval = setInterval(() => {
    if (startTime) {
      const currentTime = Math.floor((Date.now() - startTime) / 1000); // Time in seconds
      timeContainer.textContent = `${formatTime(currentTime)}`;
    }
  }, 1000); // Update every second
}

// Check if the problem is already accepted
function isProblemSolved() {
  const verdictElement = document.querySelector(".verdict-accepted"); // Codeforces selector
  return verdictElement !== null;
}

// Save time spent to chrome.storage
function saveTimeSpent(problemId, timeSpent) {
  chrome.storage.local.set({ [problemId]: timeSpent }, () => {
    console.log(`Time spent saved for problem ${problemId}: ${timeSpent} seconds`);
  });
}

// Get time spent from chrome.storage
function getTimeSpent(problemId, callback) {
  chrome.storage.local.get([problemId], (result) => {
    callback(result[problemId]);
  });
}

// Start the timer when the problem page is opened
if (window.location.href.includes("/problem/")) {
  const problemId = window.location.href.split("/problem/")[1]; // Extract problem ID from URL

  // Check if the problem is already solved
  if (isProblemSolved()) {
    // If solved, show the saved time spent
    getTimeSpent(problemId, (timeSpent) => {
      if (timeSpent) {
        const timeContainer = document.createElement("div");
        timeContainer.id = "cp-timer";
        timeContainer.style.marginTop = "20px";
        timeContainer.style.marginLeft = "20px";
        timeContainer.style.fontSize = "18px";
        timeContainer.style.fontWeight = "bold";
        timeContainer.style.color = "green";
        timeContainer.textContent = `${formatTime(timeSpent)}`;

        const navBar = document.querySelector(".second-level-menu");
        if (navBar) {
          navBar.parentNode.insertBefore(timeContainer, navBar.nextSibling);
        }
      }
    });
  } else {
    // If unsolved, start the timer
    getTimeSpent(problemId, (timeSpent) => {
      startTime = Date.now() - (timeSpent || 0) * 1000; // Continue from saved time if exists
      displayLiveTimer();
    });
  }
}

// Detect when an "Accepted" verdict is received
function checkVerdict() {
  const verdictElement = document.querySelector(".verdict-accepted"); // Codeforces selector
  if (verdictElement) {
    clearInterval(timerInterval); // Stop the timer
    const finalTime = Math.floor((Date.now() - startTime) / 1000); // Final time in seconds

    // Save the time spent for the problem
    const problemId = window.location.href.split("/problem/")[1];
    saveTimeSpent(problemId, finalTime);

    // Display the final time
    const timeContainer = document.getElementById("cp-timer");
    if (timeContainer) {
      timeContainer.textContent = `${formatTime(finalTime)}`;
    }
  }
}

// Poll for verdict updates
setInterval(checkVerdict, 1000); // Check every second