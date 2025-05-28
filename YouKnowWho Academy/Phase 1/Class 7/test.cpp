pref_odd[1] = v[1];
  for (int i = 3; i <= n; i += 2) {
    pref_odd[i] = pref_odd[i - 2] + v[i];
  }
  // print(pref_odd);
  pref_e[2] = v[2];
  for (int i = 4; i <= n; i += 2) {
    pref_e[i] = pref_e[i - 2] + v[i];
  }
  // print(pref_e);

  vector<int> even, odd;
  for(int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      odd.push_back(pref_odd[i]);
    }
    else {
      even.push_back(pref_e[i]);
    }
  }
  print(even); cout << nl;
  print(odd); cout << nl;
  vector<int> d;
  int i = 0;
  while(i < even.size() and i < odd.size()) {
    d.push_back(even[i] - odd[i]);
    i++;
  }
  while(i < even.size()) {
    d.push_back(even[i]);
    i++;
  }
  while(i < odd.size()) {
    d.push_back(odd[i]);
    i++;
  }