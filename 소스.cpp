#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t; // test case

	while (t--) {
		int k, n;
		cin >> k >> n; // 층과 호수를 입력받는다

		int arr[17][17] = { 0 }; // 넉넉하게 배열 선언 -> 전부 다 0으로

		for (int i = 0;i <= n+1;i++)
			arr[1][i] = i; // 1층 i호 = i명

		for (int i = 1; i <= k+1; i++) {	
			for (int j = 1; j <= n+1; j++) {
				for (int r = 1; r <= j; r++) {

					arr[i + 1][j] += arr[i][r]; // k층 n호까지 합 구하기
				}
			}
		}

		cout << arr[k+1][n] << endl; // k층 n호 출력
		
	}
}

