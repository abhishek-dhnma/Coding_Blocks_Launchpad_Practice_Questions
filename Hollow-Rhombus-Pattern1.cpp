#include<iostream>

using namespace std;

int main() {


  int N = 5;
  //cin>>N;
  for (int i = 1; i <= N; i++) {
    // Spaces Done
    for (int j = N - i; j > 0; j--) {
      cout << " ";
    }

    //first row star
    if (i == 1 || i == N) {
      for (int s = 1; s <= N; s++) {
        cout << "*";
      }
    } else {

      for (int d = 1; d <= N ; d++) {
       if (d==1 || d==N){
                        cout<<"*";
}                    else{
                    		cout<<" ";
        }

      }
    }

  cout << endl;

}

return 0;

}