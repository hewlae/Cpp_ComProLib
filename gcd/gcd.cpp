long gcd(long num1, long num2){
	if(num2 > num1){
		std::swap(num1, num2);
	}
	if(num1 % num2 == 0){
		return num2;
	}else{
		return gcd(num2, num1 % num2);
	}
}
