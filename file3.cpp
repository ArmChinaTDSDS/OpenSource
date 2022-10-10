#include <map>
using namespace std;

int main() {
  map<int, int> count;
  for(int i = 0; i < 100; i++) {
    count[i%10] ++;
  }
  return 0;
}
