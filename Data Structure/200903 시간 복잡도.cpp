// �ð� ���⵵ // �ݺ� Ƚ�� 
float sum(float list[], int n){ // 1
	float tempsum = 0; //0
	int i; // n+1  
	for(i=0; i<n; i++) count+=2; // n
	count += 3; // 1
	return 0; // 1
} 

void add(int a[][MAX_SIZE]...){
	int i, j;
	for(i=0; i<rows; i++){ // rows+1
		for(j=0; j<cols; j++){ // cols+1 * rows
			c[i][j] = a[i][j] + b[i][j]; // rows * cols
		}
	}
}
/*
������ ǥ��� (�� �� ǥ���) 
�ð� ���⵵�� �ְ� ������ �����ȴ�.  
�� �� ǥ����� �ְ� ������ �����ȴ�.
O() ���� ������ �������� �ð��� ���� �ɸ��� ���α׷��̴�. 

folat sum	2n+3	�� �� ǥ��� O(n)
void add	2n^2n+1	�� �� ǥ��� 0(n^2) 
*/
