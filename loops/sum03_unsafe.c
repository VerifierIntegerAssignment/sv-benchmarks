void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}
#define a (2)
int nondet_int();
unsigned int nondet_uint();
_Bool nondet_bool();

int main() { 
  int sn=0;
  unsigned int loop1=nondet_uint(), n1=nondet_uint();
  unsigned int x=0;

  while(1){
    if (x<10)
      sn = sn + a;
    x++;
    __VERIFIER_assert(sn==x*a || sn == 0);
  }
}

