extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

void f(void (*g)(int  ) ) 
{ 

  {
  {
  (*g)(1);
  }
  return;
}
}
void h(int i ) 
{ 

  {
  if (i == 1) {
    ERROR: __VERIFIER_error();
  } else {

  }
  return;
}
}
int main(void) 
{ 

  {
  {
  f(& h);
  }
  return (0);
}
}
