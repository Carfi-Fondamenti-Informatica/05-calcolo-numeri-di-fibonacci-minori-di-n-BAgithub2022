#include <iostream>
using namespace std;

int main() {
    int n=0;
   int a=0,b=1,risult=0;
   std::cin>>n;
   std::cout << "tutti i numeri della serie di Fibonacci che sono "<<" "<<"<="<<" "<<n<<std::endl;
   std::cout<<1<<std::endl;
   for (int i = n; i >=1 ; --i) {
      risult = a + b;
      a = b;
      b = risult;
      if (risult<=n) {
        std::cout << risult << std::endl;
          }
      }
   return 0;
}
