let startTime = null;
let timerInterval = null;

// Start the timer
function startTimer() {
  if (startTime === null) {
    startTime = Date.now();
    timerInterval = setInterval(() => {
      chrome.runtime.sendMessage({ type: "updateTimer" });
    }, 1000); // Update every second
  }
}

// Stop the timer and calculate time spent
function stopTimer() {
  if (startTime !== null) {
    clearInterval(timerInterval);
    const endTime = Date.now();
    const timeSpent = Math.floor((endTime - startTime) / 1000); // Time in seconds
    startTime = null;
    return timeSpent;
  }
  return 0;
}

// Listen for messages from content script
chrome.runtime.onMessage.addListener((request, sender, sendResponse) => {
  if (request.type === "startTimer") {
    startTimer();
  } else if (request.type === "stopTimer") {
    const timeSpent = stopTimer();
    sendResponse({ timeSpent });
  }
});