    #include<iostream>
    using namespace std;
    int main ()
    {
        int  n, i;
        long long m=0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++){  
            cin >> arr[i];
         m = m+ arr[i];
        }
          cout<<m;
        return 0;
    }  