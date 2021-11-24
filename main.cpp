//#include <bits/stdc++.h>//unoptimized approach
//
//using namespace std;
//
//string* bomberman(string *arr,int m,int n,int t)
//{
//    if(t==1)
//        return arr;
//
//     if(t%2==0)
//    {
//        for(int i=0;i<m;i++)
//    {
//
//        fill(arr[i].begin(),arr[i].end(),'O');
//        /*for(int j=0;j<n;j++)
//        {
//            arr[i][j]='O';
//        }*/
//    }
//        return arr;
//    }
//
//    for(int k=2;k<=t;k++)
//    {
//
//       if(k%2!=0)
//       {
//           for(int i=0;i<m;i++)
//           {
//               for(int j=0;j<n;j++)
//               {
//                   if(arr[i][j]=='O')
//                   {
//                       arr[i][j]='.';
//                       if(i>=1&&arr[i-1][j]!='O')
//                        {
//                            arr[i-1][j]='.';
//                        }
//                       if(i<m-1&&arr[i+1][j]!='O')
//                        {
//                            arr[i+1][j]='.';
//                        }
//                       if(j>=1&&arr[i][j-1]!='O')
//                        {
//
//                            arr[i][j-1]='.';
//                        }
//                       if(j<n-1&&arr[i][j+1]!='O')
//                        {
//                            arr[i][j+1]='.';
//                        }
//                   }
//               }
//           }
//
//
//           for(int i=0;i<m;i++)
//           {
//                for(int j=0;j<n;j++)
//                if(arr[i][j]=='x')
//               {
//                  arr[i][j]='O';
//               }
//           }
//
//    }
//
//       if(k%2==0)
//       {
//           for(int i=0;i<m;i++)
//           {
//               for(int j=0;j<n;j++)
//               {
//                   if(arr[i][j]!='O')
//               {
//                  arr[i][j]='x';
//               }
//               }
//
//           }
//       }
//
//    }
//    return arr;
//}
//
//
//int main()
//{
//    int m,n,t;
//    cin >> m >> n >> t;
//    string arr[m];
//    for(int i=0;i<m;i++)
//    {
//            while(arr[i].length()==0)
//                getline(cin,arr[i]);
//    }
//
//    bomberman(arr,m,n,t);
//     for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout << arr[i][j];
//        }
//
//        cout << endl;
//    }
//    return 0;
//}









//optimized approach








//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//string* case_5(string *arr,int m,int n,int t)
//{
//    for(int k=2;k<=5;k++)
//    {
//
//       if(k%2!=0)
//       {
//           for(int i=0;i<m;i++)
//           {
//               for(int j=0;j<n;j++)
//               {
//                   if(arr[i][j]=='O')
//                   {
//                       arr[i][j]='.';
//                       if(i>=1&&arr[i-1][j]!='O')
//                        {
//                            arr[i-1][j]='.';
//                        }
//                       if(i<m-1&&arr[i+1][j]!='O')
//                        {
//                            arr[i+1][j]='.';
//                        }
//                       if(j>=1&&arr[i][j-1]!='O')
//                        {
//
//                            arr[i][j-1]='.';
//                        }
//                       if(j<n-1&&arr[i][j+1]!='O')
//                        {
//                            arr[i][j+1]='.';
//                        }
//                   }
//               }
//           }
//
//
//           for(int i=0;i<m;i++)
//           {
//               //replace(arr[0].begin(),arr[0].end(),'x','O');
//
//                for(int j=0;j<n;j++)
//                if(arr[i][j]=='x')
//               {
//                  arr[i][j]='O';
//               }
//           }
//
//    }
//
//       if(k%2==0)
//       {
//           for(int i=0;i<m;i++)
//           {
//               for(int j=0;j<n;j++)
//               {
//                   if(arr[i][j]!='O')
//               {
//                  arr[i][j]='x';
//               }
//               }
//
//           }
//       }
//
//    }
//    return arr;
//}
//
//string* case_3(string *arr,int m,int n,int t)
//{
//    for(int k=2;k<=3;k++)
//    {
//
//       if(k%2!=0)
//       {
//           for(int i=0;i<m;i++)
//           {
//               for(int j=0;j<n;j++)
//               {
//                   if(arr[i][j]=='O')
//                   {
//                       arr[i][j]='.';
//                       if(i>=1&&arr[i-1][j]!='O')
//                        {
//                            arr[i-1][j]='.';
//                        }
//                       if(i<m-1&&arr[i+1][j]!='O')
//                        {
//                            arr[i+1][j]='.';
//                        }
//                       if(j>=1&&arr[i][j-1]!='O')
//                        {
//
//                            arr[i][j-1]='.';
//                        }
//                       if(j<n-1&&arr[i][j+1]!='O')
//                        {
//                            arr[i][j+1]='.';
//                        }
//                   }
//               }
//           }
//
//
//           for(int i=0;i<m;i++)
//           {
//               //replace(arr[0].begin(),arr[0].end(),'x','O');
//
//                for(int j=0;j<n;j++)
//                if(arr[i][j]=='x')
//               {
//                  arr[i][j]='O';
//               }
//           }
//
//    }
//
//       if(k%2==0)
//       {
//           for(int i=0;i<m;i++)
//           {
//               for(int j=0;j<n;j++)
//               {
//                   if(arr[i][j]!='O')
//               {
//                  arr[i][j]='x';
//               }
//               }
//
//           }
//       }
//
//    }
//    return arr;
//}
//
//string* bomberman(string *arr,int m,int n,int t)
//{
//    if(t==1)
//        return arr;
//
//     if(t%2==0)
//    {
//        for(int i=0;i<m;i++)
//    {
//
//        fill(arr[i].begin(),arr[i].end(),'O');
//        /*for(int j=0;j<n;j++)
//        {
//            arr[i][j]='O';
//        }*/
//    }
//        return arr;
//    }
//    if((t-3)%4==0)
//      arr=case_3(arr,m,n,t);
//    if((t-5)%4==0)
//      arr=case_5(arr,m,n,t);
//    return arr;
//}
//
//
//int main()
//{
//    int m,n,t;
//    cin >> m >> n >> t;
//    string arr[m];
//    for(int i=0;i<m;i++)
//    {
//            while(arr[i].length()==0)
//                getline(cin,arr[i]);
//    }
//
//    bomberman(arr,m,n,t);
//     for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout << arr[i][j];
//        }
//
//        cout << endl;
//    }
//    return 0;
//}


