

  /* Enter your code here */
  auto *x0 = dynamic_cast<Fireball*>(spell);
  if (x0) { x0->revealFirepower(); return ;}
  auto *x1 = dynamic_cast<Frostbite*>(spell);
  if (x1) {x1->revealFrostpower(); return ;}
  auto *x2 = dynamic_cast<Thunderstorm*>(spell);
  if (x2) {x2->revealThunderpower(); return ; }
  auto *x3 = dynamic_cast<Waterbolt*>(spell);
  if (x3) {x3->revealWaterpower(); return; }

  string a = spell->revealScrollName(), b = SpellJournal::read();
  int m = a.size(), n = b.size();
  vector<vector<int> > s(m+1, vector<int>(n+1, 0));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      s[i+1][j+1] = max(s[i][j]+(a[i]==b[j]), max(s[i+1][j], s[i][j+1]));
  }
  cout << s[m][n] << '\n';
  
