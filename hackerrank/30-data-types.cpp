    // Declare second integer, double, and String variables.
    long long int i1;
    double d1;
    string s1;
    // Read and save an integer, double, and String to your variables.
    cin >> i1 >> d1;
    getchar();
    getline(cin,s1);
    // Print the sum of both integer variables on a new line.
    cout << i+i1 << endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision (1) << fixed;
    cout << d+d1 << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    s.append(s1);
    cout << s << endl;
