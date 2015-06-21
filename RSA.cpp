long int RSA::getPrimeNumber() {
}

long int RSA::getCoPrimeOf(long int n) {
}

void RSA::generateKeys() {
  long int p = getPrimeNumber();
  long int q = getPrimeNumber();

  long int n = p * q;

  long int en = (p-1) * (q-1);

  long int e = getCoPrimeOf(en);

}
