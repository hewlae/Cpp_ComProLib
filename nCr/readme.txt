階乗の剰余の逆元をO(N)かけて前計算することによってnCr(comb(n, r))をO(1)で求めるプログラム
By calculating modular inverse of factorial up to N! with O(N), you can get nCr (comb(n, r)) with O(1)

tips.
mod MOD.
nCr = ((factorial[n] % MOD) * modinv[r] % MOD) * modinv[n-r] % MOD;
N is the maximum value of n in nCr.
