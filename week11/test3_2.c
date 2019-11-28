#include "my.h"

void pr_exit(int s,pid_t pid){
	int sig;
	if(WIFEXITED(s))
		printf("process %d normal termination,exit status = %d\n",pid,WEXITSTATUS(s));
	else if(WIFSIGNALED(s)){
		sig = WTERMSIG(s);
		printf("process &d abnormal termaination,signal number = %d%s\n",pid,sig,
		#ifdef WCOREDUMP
			WCOREDUMP(s)?"core file generated":"");
		#else
			"");
		#endif
			psignal(sig,"");
	}else if(WIFSTOPPED(s)){
		sig = WSTOPSIG(s);
		printf("process %d stopped,signal number = %d:",pid,sig);
		psignal(sig,"");
	}
}
