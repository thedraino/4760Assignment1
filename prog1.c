#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<getopt.h>

int main (int argc, char *argv[]) {
  pid_t childpid = 0;
  int i, n, option;
  int nchars;
  char c;
  
  if (argc < 2 || argc > 4) {
    fprintf(stderr, "You passed an invalid number of arguments.\n");
    return 1;
  }
  
  while ((option = getopt(argc, argv, "hn:p")) != -1) {
    switch (option) {
      case 'h' :
        printf("You must use one of the following options to use this program:\n");
        printf("1 ./prog1 -h : display help message\n");
        printf("2 ./prog1 -n x : runs the program with x amount of processes\n");
        printf("3 ./prog1 -p : generates a test error message\n");
        break;
      
      case 'n' :
        n = atoi(optarg++);
        nchars = atoi(argv[3]) + 1;
        char mybuf[nchars:w];
        
//         printf("Enter your %d characters to form the string:\n", nchars);
//         for (i = 0; i < nchars; i++) {
//           c = getchar();
//           mybuf[i] = c;
//         }
//         mybuf[nchars] = '\0'
        
        for (i = 1; i < n; i++) {
          if (childpid = fork())
            break;
        }
        
        //fprintf (stderr, "%ld : %s", (long)getpid(), mybuf);
        //fprintf (stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n", i, (long)getpid(), (long)getppid(), (long)childpid);
          
      case 'p' :
        fprintf(stderr, "%s:", argv[0]);
        perror("Error");
        break;
        
      default :
        printf("You must enter the option and a numeric argument.\n");
        printf("Enter './prog1 -h' on the command-line for more help.\n");
    }
  }
  
  return 0;
}
