int n;
    cin >> n;
    // rows
    for (int i = 3; i < n; i++)
    {
        // 1st triangle
        for (int j = 0; j < i - 2; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    for (int i = 5; i > n - 5; i--)
    {
        // 1st triangle
        for (int j = 0; j < i - 2; j++)
        {
            cout << i;
        }
        cout << endl;
    }