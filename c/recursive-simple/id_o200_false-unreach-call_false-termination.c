extern unsigned int __VERIFIER_nondet_uint();
extern void __VERIFIER_error();

unsigned int id(unsigned int x) {
  if (x==0) return 0;
  return id(x-1) + 1;
}

int main(void) {
  unsigned int input = __VERIFIER_nondet_uint();
  unsigned int result = id(input);
  if (result == 200) {
    ERROR: __VERIFIER_error();
  }
}
