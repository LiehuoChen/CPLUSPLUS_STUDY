#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
class EmptyClass{
	public:
		EmptyClass(int n) : val(n) {}
		EmptyClass(EmptyClass &A) {
			val = A.val;
		}
		virtual void getValue() {}
	    	~EmptyClass() {}
	    int a = 0;
		int b = 10;
//		int dp[a][b];
		int val;
		int val2;
		int val3;
		int val4;
};
class ExtendEmpty : public EmptyClass {
	public:
	ExtendEmpty(int n) : EmptyClass(n) {}
	public:
	int val;
	int val2;
};

short parity4(unsigned long x) {
  x ^= x >> 32;
  x ^= x >> 16;
  x ^= x >> 8;
  x ^= x >> 4;
  x ^= x >> 2;
  x ^= x >> 1;

  return x & 0x1; // only want the last 4 bits of x.
  // Return the LSB, which is the parity.
}
template<class T> 
void dump_vector(vector<T> &nums) {
	for (auto num : nums) {
		cout << num << ", ";
	}
	cout << endl;
}

int main(void) {
	int a, b;
	int dp[a][b];
	EmptyClass empty1(10);
	EmptyClass empty2 = empty1;
	ExtendEmpty extend1(11);
	cout << "size of empty class " << sizeof(EmptyClass) << endl;	
	cout << "size of empty object " << sizeof(empty1) << endl;	
	cout << "size of extended empty class " << sizeof(ExtendEmpty) << endl;	
	cout << "size of extended empty object " << sizeof(extend1) << endl;	
	cout << " parity : " << parity4(0xff) << endl;
	cout << " parity : " << parity4(0x7f) << endl;

	/** c++14  */
	vector<int> nums{4, 3, 2, 12, 0, 9};
	//sort(nums);
    dump_vector(nums);	
   return 0;
}
