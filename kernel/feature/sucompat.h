#ifndef __KSU_H_SUCOMPAT
#define __KSU_H_SUCOMPAT

void ksu_sucompat_init(void);
void ksu_sucompat_exit(void);

#ifdef CONFIG_KSU_SUSFS
struct filename;
int ksu_handle_execveat(int *fd, struct filename **filename_ptr, void *argv, void *envp, int *flags);
int ksu_handle_execveat_sucompat(int *fd, struct filename **filename_ptr, void *argv, void *envp, int *flags);
int ksu_handle_post_execveat_sucompat(int *fd, struct filename **filename_ptr, void *argv, void *envp, int *flags, int *retval);
int ksu_handle_faccessat(int *dfd, struct filename **filename_ptr, int *mode, int *__unused_flags);
int ksu_handle_stat(int *dfd, struct filename **filename_ptr, int *flags);
#endif

#endif
