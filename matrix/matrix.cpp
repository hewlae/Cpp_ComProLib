class Matrix{
	long row_size;
	long column_size;
	std::vector<std::vector<long> > com;//component
	
	public:
	Matrix(long a, long b);
	void visualize();
	long row_size_is();
	long column_size_is();
	void com_set(long i, long j, long x);
	void column_set(long i, std::vector<long> vec);
	void row_set(long j, std::vector<long> vec);
	
};

Matrix::Matrix(long a, long b){//a rows, b columns
	row_size = a;
	column_size = b;
	for(int i = 0; i < a; i++){
		std::vector<long> vec(b, 0);
		com.push_back(vec);    
	}
}

void Matrix::visualize(){
	printf("%ld * %ld\n", row_size, column_size);
	for(int i = 0; i < row_size; i++){
		for(int j = 0; j < column_size; j++){
			printf("%3ld ", com[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

long Matrix::row_size_is(){
	return row_size;
}
long Matrix::column_size_is(){
	return column_size;
}

void Matrix::com_set(long i, long j, long x){
	if(i < 0 || row_size <= i || j < 0 || column_size<= j){
		printf("com_set: Out of range! (%ld, %ld) <- %ld\n", i, j, x);
		return;
	}
	com[i][j] = x;
}

void Matrix::column_set(long i, std::vector<long> vec){
	if(i < 0 || row_size <= i){
		printf("column_set: Row is out of range! (%ld)\n", i);
	}else if(vec.size() != column_size){
		printf("column_set: Invalid length!\n");
	}else{
		com[i] = vec;
	}
}

void Matrix::row_set(long j, std::vector<long> vec){
	if(j < 0 || column_size<= j){
		printf("row_set: Column is out of range! (%ld)\n", j);
	}else if(vec.size() != row_size){
		printf("row_set: Invalid length!\n");
	}else{
		for(int i = 0; i < row_size; i++){
			com[i][j] = vec[i];
		}
	}
}
