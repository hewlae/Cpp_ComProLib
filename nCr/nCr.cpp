//mod MOD
//nCr = ((factorial[n] % MOD) * modinv[r] % MOD) * modinv[n-r] % MOD;

long N = 300010; // N = 300010, change on your own
long factorial[300010];//[i]: i!
long modinv[300010];//[i]: 1/(i!) mod MOD


//power, num1^num2
long power(long num1, long num2){
	if(num2 == 1){
		return num1 % MOD;
	}else if(num2 % 2){
		return num1 * power(num1, num2-1) % MOD;
	}else{
		long result = power(num1, num2/2);
		return result * result % MOD;
	}
}

//execute this before you use nCr
void nCr_init(){
	factorial[0] = 1;
	factorial[1] = 1;
	for(long i = 2; i <= N; i++){
		factorial[i] = factorial[i-1] * i % MOD;
	}
	for(int i = 0; i <= N; i++){
		modinv[i] = power(factorial[i], MOD-2);
	}
	for(int i = 0; i <= N; i++){
		modinv[i] = power(factorial[i], MOD-2);
	}
}
