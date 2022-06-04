string timeConversion(string s) {
    int n = s.size();
    string st = s.substr(0, s.find(':'));
    int nt = stoi(st);
    if (s[n - 2]=='P' && nt < 12) {
        s = to_string(nt + 12) + s.substr(2, n);    
    }else if (s[n - 2]=='A'){
        if (nt == 12) {
            s = "00" + s.substr(2, n);
        }
    }
    s = s.substr(0, 8);
    return s;
}