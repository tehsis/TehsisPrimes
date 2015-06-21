class RSA {
  long int getPrimeNumber();
  long int getCoPrimeOf(long int);
  long int publicKey;
  long int privateKey;
  void generateKeys(); 

  public:
  RSA(); // will use to encode and decode generating keys. 
  RSA(long int publicKey); // will be used to decode.
  RSA(long int privateKey, long int publicKey); // will be used to encode and decode providing custom keys
  long int getPublicKey();
  long int getPrivateKey();
}
