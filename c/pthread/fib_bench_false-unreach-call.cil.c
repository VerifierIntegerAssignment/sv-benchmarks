extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_3 {
   char __size[56] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_3 pthread_attr_t;
extern  __attribute__((__nothrow__)) int pthread_create(pthread_t * __restrict  __newthread ,
                                                        pthread_attr_t const   * __restrict  __attr ,
                                                        void *(*__start_routine)(void * ) ,
                                                        void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
extern  __attribute__((__noreturn__)) void pthread_exit(void *__retval ) ;
int i  =    1;
int j  =    1;
void *t1(void *arg ) 
{ int k ;
  void *__cil_tmp3 ;

  {
  k = 0;
  k = 0;
  {
  while (1) {
    while_0_continue: /* CIL Label */ ;
    if (k < 5) {

    } else {
      goto while_0_break;
    }
    i = i + j;
    k = k + 1;
  }
  while_0_break: /* CIL Label */ ;
  }
  {
  __cil_tmp3 = (void *)0;
  pthread_exit(__cil_tmp3);
  }
}
}
void *t2(void *arg ) 
{ int k ;
  void *__cil_tmp3 ;

  {
  k = 0;
  k = 0;
  {
  while (1) {
    while_1_continue: /* CIL Label */ ;
    if (k < 5) {

    } else {
      goto while_1_break;
    }
    j = j + i;
    k = k + 1;
  }
  while_1_break: /* CIL Label */ ;
  }
  {
  __cil_tmp3 = (void *)0;
  pthread_exit(__cil_tmp3);
  }
}
}
int main(int argc , char **argv ) 
{ pthread_t id1 ;
  pthread_t id2 ;
  pthread_t * __restrict  __cil_tmp5 ;
  void *__cil_tmp6 ;
  pthread_attr_t const   * __restrict  __cil_tmp7 ;
  void *__cil_tmp8 ;
  void * __restrict  __cil_tmp9 ;
  pthread_t * __restrict  __cil_tmp10 ;
  void *__cil_tmp11 ;
  pthread_attr_t const   * __restrict  __cil_tmp12 ;
  void *__cil_tmp13 ;
  void * __restrict  __cil_tmp14 ;

  {
  {
  __cil_tmp5 = (pthread_t * __restrict  )(& id1);
  __cil_tmp6 = (void *)0;
  __cil_tmp7 = (pthread_attr_t const   * __restrict  )__cil_tmp6;
  __cil_tmp8 = (void *)0;
  __cil_tmp9 = (void * __restrict  )__cil_tmp8;
  pthread_create(__cil_tmp5, __cil_tmp7, & t1, __cil_tmp9);
  __cil_tmp10 = (pthread_t * __restrict  )(& id2);
  __cil_tmp11 = (void *)0;
  __cil_tmp12 = (pthread_attr_t const   * __restrict  )__cil_tmp11;
  __cil_tmp13 = (void *)0;
  __cil_tmp14 = (void * __restrict  )__cil_tmp13;
  pthread_create(__cil_tmp10, __cil_tmp12, & t2, __cil_tmp14);
  }
  if (i >= 144) {
    goto _L;
  } else {
    if (j >= 144) {
      _L: /* CIL Label */ 
      ERROR: __VERIFIER_error();
    } else {

    }
  }
  return (0);
}
}
