void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}
unsigned int nondet_uint();
int main() { 
  unsigned int i, n=nondet_uint(), sn=0;
  for(i=0; i<=n; i++) {
    sn = sn + i;
  }
  __VERIFIER_assert(sn==(n*(n+1))/2 || sn == 0);
}
