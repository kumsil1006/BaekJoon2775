#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t; // test case

	while (t--) {
		int k, n;
		cin >> k >> n; // ���� ȣ���� �Է¹޴´�

		int arr[17][17] = { 0 }; // �˳��ϰ� �迭 ���� -> ���� �� 0����

		for (int i = 0;i <= n+1;i++)
			arr[1][i] = i; // 1�� iȣ = i��

		for (int i = 1; i <= k+1; i++) {	
			for (int j = 1; j <= n+1; j++) {
				for (int r = 1; r <= j; r++) {

					arr[i + 1][j] += arr[i][r]; // k�� nȣ���� �� ���ϱ�
				}
			}
		}

		cout << arr[k+1][n] << endl; // k�� nȣ ���
		
	}
}

