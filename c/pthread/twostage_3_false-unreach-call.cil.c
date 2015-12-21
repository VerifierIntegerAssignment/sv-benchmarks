extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_14 {
   char __size[56] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_14 pthread_attr_t;
struct __pthread_internal_list {
   struct __pthread_internal_list *__prev ;
   struct __pthread_internal_list *__next ;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   unsigned int __nusers ;
   int __kind ;
   int __spins ;
   __pthread_list_t __list ;
};
union __anonunion_pthread_mutex_t_15 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_15 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_16 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_mutexattr_t_16 pthread_mutexattr_t;

extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s , char const   * __restrict  __format 
                                                , ...)  __asm__("__isoc99_sscanf")  ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__)) int pthread_create(pthread_t * __restrict  __newthread ,
                                                        pthread_attr_t const   * __restrict  __attr ,
                                                        void *(*__start_routine)(void * ) ,
                                                        void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
extern int pthread_join(pthread_t __th , void **__thread_return ) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_init(pthread_mutex_t *__mutex ,
                                                            pthread_mutexattr_t const   *__mutexattr )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_lock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int pthread_mutex_unlock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
static int iTThreads  =    2;
static int iRThreads  =    1;
static int data1Value  =    0;
static int data2Value  =    0;
pthread_mutex_t *data1Lock  ;
pthread_mutex_t *data2Lock  ;
void lock(pthread_mutex_t *lock___0 ) ;
void unlock(pthread_mutex_t *lock___0 ) ;
void *funcA(void *param ) 
{ 

  {
  {
  pthread_mutex_lock(data1Lock);
  data1Value = 1;
  pthread_mutex_unlock(data1Lock);
  pthread_mutex_lock(data2Lock);
  data2Value = data1Value + 1;
  pthread_mutex_unlock(data2Lock);
  }
  return ((void *)0);
}
}
void *funcB(void *param ) 
{ int t1 ;
  int t2 ;
  int __cil_tmp4 ;
  FILE * __restrict  __cil_tmp5 ;
  char const   * __restrict  __cil_tmp6 ;

  {
  {
  t1 = -1;
  t2 = -1;
  pthread_mutex_lock(data1Lock);
  }
  if (data1Value == 0) {
    {
    pthread_mutex_unlock(data1Lock);
    }
    return ((void *)0);
  } else {

  }
  {
  t1 = data1Value;
  pthread_mutex_unlock(data1Lock);
  pthread_mutex_lock(data2Lock);
  t2 = data2Value;
  pthread_mutex_unlock(data2Lock);
  }
  {
  __cil_tmp4 = t1 + 1;
  if (t2 != __cil_tmp4) {
    {
    __cil_tmp5 = (FILE * __restrict  )stderr;
    __cil_tmp6 = (char const   * __restrict  )"Bug found!\n";
    fprintf(__cil_tmp5, __cil_tmp6);
    ERROR: __VERIFIER_error();
    }

  } else {

  }
  }
  return ((void *)0);
}
}
int main(int argc , char **argv ) 
{ int i ;
  int err ;
  void *tmp ;
  void *tmp___0 ;
  pthread_t *tPool ;
  unsigned int __lengthoftPool ;
  void *tmp___1 ;
  pthread_t *rPool ;
  unsigned int __lengthofrPool ;
  void *tmp___2 ;
  FILE * __restrict  __cil_tmp13 ;
  char const   * __restrict  __cil_tmp14 ;
  char **__cil_tmp15 ;
  char *__cil_tmp16 ;
  char const   * __restrict  __cil_tmp17 ;
  char const   * __restrict  __cil_tmp18 ;
  char **__cil_tmp19 ;
  char *__cil_tmp20 ;
  char const   * __restrict  __cil_tmp21 ;
  char const   * __restrict  __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  void *__cil_tmp25 ;
  pthread_mutexattr_t const   *__cil_tmp26 ;
  FILE * __restrict  __cil_tmp27 ;
  char const   * __restrict  __cil_tmp28 ;
  void *__cil_tmp29 ;
  pthread_mutexattr_t const   *__cil_tmp30 ;
  FILE * __restrict  __cil_tmp31 ;
  char const   * __restrict  __cil_tmp32 ;
  int *__cil_tmp33 ;
  int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  int *__cil_tmp36 ;
  int __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  int *__cil_tmp39 ;
  int __cil_tmp40 ;
  pthread_t *__cil_tmp41 ;
  pthread_t * __restrict  __cil_tmp42 ;
  void *__cil_tmp43 ;
  pthread_attr_t const   * __restrict  __cil_tmp44 ;
  void *__cil_tmp45 ;
  void * __restrict  __cil_tmp46 ;
  FILE * __restrict  __cil_tmp47 ;
  char const   * __restrict  __cil_tmp48 ;
  int *__cil_tmp49 ;
  int __cil_tmp50 ;
  pthread_t *__cil_tmp51 ;
  pthread_t * __restrict  __cil_tmp52 ;
  void *__cil_tmp53 ;
  pthread_attr_t const   * __restrict  __cil_tmp54 ;
  void *__cil_tmp55 ;
  void * __restrict  __cil_tmp56 ;
  FILE * __restrict  __cil_tmp57 ;
  char const   * __restrict  __cil_tmp58 ;
  int *__cil_tmp59 ;
  int __cil_tmp60 ;
  pthread_t *__cil_tmp61 ;
  pthread_t __cil_tmp62 ;
  void *__cil_tmp63 ;
  void **__cil_tmp64 ;
  FILE * __restrict  __cil_tmp65 ;
  char const   * __restrict  __cil_tmp66 ;
  int *__cil_tmp67 ;
  int __cil_tmp68 ;
  pthread_t *__cil_tmp69 ;
  pthread_t __cil_tmp70 ;
  void *__cil_tmp71 ;
  void **__cil_tmp72 ;
  FILE * __restrict  __cil_tmp73 ;
  char const   * __restrict  __cil_tmp74 ;

  {
  if (argc != 1) {
    if (argc != 3) {
      {
      __cil_tmp13 = (FILE * __restrict  )stderr;
      __cil_tmp14 = (char const   * __restrict  )"./twostage <param1> <param2>\n";
      fprintf(__cil_tmp13, __cil_tmp14);
      exit(-1);
      }
    } else {
      {
      __cil_tmp15 = argv + 1;
      __cil_tmp16 = *__cil_tmp15;
      __cil_tmp17 = (char const   * __restrict  )__cil_tmp16;
      __cil_tmp18 = (char const   * __restrict  )"%d";
      sscanf(__cil_tmp17, __cil_tmp18, & iTThreads);
      __cil_tmp19 = argv + 2;
      __cil_tmp20 = *__cil_tmp19;
      __cil_tmp21 = (char const   * __restrict  )__cil_tmp20;
      __cil_tmp22 = (char const   * __restrict  )"%d";
      sscanf(__cil_tmp21, __cil_tmp22, & iRThreads);
      }
    }
  } else {

  }
  {
  __cil_tmp23 = (unsigned long )40U;
  tmp = malloc(__cil_tmp23);
  data1Lock = (pthread_mutex_t *)tmp;
  __cil_tmp24 = (unsigned long )40U;
  tmp___0 = malloc(__cil_tmp24);
  data2Lock = (pthread_mutex_t *)tmp___0;
  __cil_tmp25 = (void *)0;
  __cil_tmp26 = (pthread_mutexattr_t const   *)__cil_tmp25;
  err = pthread_mutex_init(data1Lock, __cil_tmp26);
  }
  if (0 != err) {
    {
    __cil_tmp27 = (FILE * __restrict  )stderr;
    __cil_tmp28 = (char const   * __restrict  )"pthread_mutex_init error: %d\n";
    fprintf(__cil_tmp27, __cil_tmp28, err);
    exit(-1);
    }
  } else {

  }
  {
  __cil_tmp29 = (void *)0;
  __cil_tmp30 = (pthread_mutexattr_t const   *)__cil_tmp29;
  err = pthread_mutex_init(data2Lock, __cil_tmp30);
  }
  if (0 != err) {
    {
    __cil_tmp31 = (FILE * __restrict  )stderr;
    __cil_tmp32 = (char const   * __restrict  )"pthread_mutex_init error: %d\n";
    fprintf(__cil_tmp31, __cil_tmp32, err);
    exit(-1);
    }
  } else {

  }
  {
  __cil_tmp33 = & iTThreads;
  __cil_tmp34 = *__cil_tmp33;
  __lengthoftPool = (unsigned int )__cil_tmp34;
  __cil_tmp35 = 4U * __lengthoftPool;
  tmp___1 = __builtin_alloca(__cil_tmp35);
  tPool = (pthread_t *)tmp___1;
  __cil_tmp36 = & iRThreads;
  __cil_tmp37 = *__cil_tmp36;
  __lengthofrPool = (unsigned int )__cil_tmp37;
  __cil_tmp38 = 4U * __lengthofrPool;
  tmp___2 = __builtin_alloca(__cil_tmp38);
  rPool = (pthread_t *)tmp___2;
  i = 0;
  }
  {
  while (1) {
    while_0_continue: /* CIL Label */ ;
    {
    __cil_tmp39 = & iTThreads;
    __cil_tmp40 = *__cil_tmp39;
    if (i < __cil_tmp40) {

    } else {
      goto while_0_break;
    }
    }
    {
    __cil_tmp41 = tPool + i;
    __cil_tmp42 = (pthread_t * __restrict  )__cil_tmp41;
    __cil_tmp43 = (void *)0;
    __cil_tmp44 = (pthread_attr_t const   * __restrict  )__cil_tmp43;
    __cil_tmp45 = (void *)0;
    __cil_tmp46 = (void * __restrict  )__cil_tmp45;
    err = pthread_create(__cil_tmp42, __cil_tmp44, & funcA, __cil_tmp46);
    }
    if (0 != err) {
      {
      __cil_tmp47 = (FILE * __restrict  )stderr;
      __cil_tmp48 = (char const   * __restrict  )"Error [%d] found creating 2stage thread.\n";
      fprintf(__cil_tmp47, __cil_tmp48, err);
      exit(-1);
      }
    } else {

    }
    i = i + 1;
  }
  while_0_break: /* CIL Label */ ;
  }
  i = 0;
  {
  while (1) {
    while_1_continue: /* CIL Label */ ;
    {
    __cil_tmp49 = & iRThreads;
    __cil_tmp50 = *__cil_tmp49;
    if (i < __cil_tmp50) {

    } else {
      goto while_1_break;
    }
    }
    {
    __cil_tmp51 = rPool + i;
    __cil_tmp52 = (pthread_t * __restrict  )__cil_tmp51;
    __cil_tmp53 = (void *)0;
    __cil_tmp54 = (pthread_attr_t const   * __restrict  )__cil_tmp53;
    __cil_tmp55 = (void *)0;
    __cil_tmp56 = (void * __restrict  )__cil_tmp55;
    err = pthread_create(__cil_tmp52, __cil_tmp54, & funcB, __cil_tmp56);
    }
    if (0 != err) {
      {
      __cil_tmp57 = (FILE * __restrict  )stderr;
      __cil_tmp58 = (char const   * __restrict  )"Error [%d] found creating read thread.\n";
      fprintf(__cil_tmp57, __cil_tmp58, err);
      exit(-1);
      }
    } else {

    }
    i = i + 1;
  }
  while_1_break: /* CIL Label */ ;
  }
  i = 0;
  {
  while (1) {
    while_2_continue: /* CIL Label */ ;
    {
    __cil_tmp59 = & iTThreads;
    __cil_tmp60 = *__cil_tmp59;
    if (i < __cil_tmp60) {

    } else {
      goto while_2_break;
    }
    }
    {
    __cil_tmp61 = tPool + i;
    __cil_tmp62 = *__cil_tmp61;
    __cil_tmp63 = (void *)0;
    __cil_tmp64 = (void **)__cil_tmp63;
    err = pthread_join(__cil_tmp62, __cil_tmp64);
    }
    if (0 != err) {
      {
      __cil_tmp65 = (FILE * __restrict  )stderr;
      __cil_tmp66 = (char const   * __restrict  )"pthread join error: %d\n";
      fprintf(__cil_tmp65, __cil_tmp66, err);
      exit(-1);
      }
    } else {

    }
    i = i + 1;
  }
  while_2_break: /* CIL Label */ ;
  }
  i = 0;
  {
  while (1) {
    while_3_continue: /* CIL Label */ ;
    {
    __cil_tmp67 = & iRThreads;
    __cil_tmp68 = *__cil_tmp67;
    if (i < __cil_tmp68) {

    } else {
      goto while_3_break;
    }
    }
    {
    __cil_tmp69 = rPool + i;
    __cil_tmp70 = *__cil_tmp69;
    __cil_tmp71 = (void *)0;
    __cil_tmp72 = (void **)__cil_tmp71;
    err = pthread_join(__cil_tmp70, __cil_tmp72);
    }
    if (0 != err) {
      {
      __cil_tmp73 = (FILE * __restrict  )stderr;
      __cil_tmp74 = (char const   * __restrict  )"pthread join error: %d\n";
      fprintf(__cil_tmp73, __cil_tmp74, err);
      exit(-1);
      }
    } else {

    }
    i = i + 1;
  }
  while_3_break: /* CIL Label */ ;
  }
  return (0);
}
}
void lock(pthread_mutex_t *lock___0 ) 
{ int err ;
  FILE * __restrict  __cil_tmp3 ;
  char const   * __restrict  __cil_tmp4 ;

  {
  {
  err = pthread_mutex_lock(lock___0);
  }
  if (0 != err) {
    {
    __cil_tmp3 = (FILE * __restrict  )stderr;
    __cil_tmp4 = (char const   * __restrict  )"Got error %d from pthread_mutex_lock.\n";
    fprintf(__cil_tmp3, __cil_tmp4, err);
    exit(-1);
    }
  } else {

  }
  return;
}
}
void unlock(pthread_mutex_t *lock___0 ) 
{ int err ;
  FILE * __restrict  __cil_tmp3 ;
  char const   * __restrict  __cil_tmp4 ;

  {
  {
  err = pthread_mutex_unlock(lock___0);
  }
  if (0 != err) {
    {
    __cil_tmp3 = (FILE * __restrict  )stderr;
    __cil_tmp4 = (char const   * __restrict  )"Got error %d from pthread_mutex_unlock.\n";
    fprintf(__cil_tmp3, __cil_tmp4, err);
    exit(-1);
    }
  } else {

  }
  return;
}
}
