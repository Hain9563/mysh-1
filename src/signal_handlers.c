#include "signal_handlers.h"
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void catch_sigint(int signalNo)
{
   signal(signalNo, SIG_IGN);
  // TODO: File this!
}

void catch_sigtstp(int signalNo)
{
	signal(signalNo, SIG_IGN);
  // TODO: File this!
}
