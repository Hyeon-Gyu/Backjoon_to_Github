#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int l;
	int cnt = 0;
	int res = 0;
	char arr[80];
	cin >> l;
	for(int i=0;i<l;i++){
		cin >> arr;
		for(int j=0; j<strlen(arr); j++){
			if(arr[j] == 'O') cnt++;
			else cnt = 0;
			res += cnt;
		}
		cout << res << endl;
		res = 0; cnt = 0;
	}

	return 0;
}