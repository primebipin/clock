#include <bits/stdc++.h>
#include <windows.h>

#include <unistd.h>
using namespace std;
int main()
{

  while (true)
  {
    system("cls");
    // Declaring argument for time()
    time_t tt;

    // Declaring variable to store return value of
    // localtime()
    struct tm *ti;
    // Using localtime()
    // Applying time()
    time(&tt);
    ti = localtime(&tt);
    cout << asctime(ti);
    
    sleep(1);
  }
  return 0;
}