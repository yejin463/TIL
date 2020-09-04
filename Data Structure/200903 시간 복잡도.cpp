// 시간 복잡도 // 반복 횟수 
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
점금적 표기법 (빅 오 표기법) 
시간 복잡도의 최고 차수로 결정된다.  
빅 오 표기법은 최고 차수로 결정된다.
O() 안의 차수가 작을수록 시간이 적게 걸리는 프로그램이다. 

folat sum	2n+3	빅 오 표기법 O(n)
void add	2n^2n+1	빅 오 표기법 0(n^2) 
*/
