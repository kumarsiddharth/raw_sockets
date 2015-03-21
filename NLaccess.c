#include <stdio.h>
#include <string.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>

int main()
{
	int sockfd = socket(PF_INET,SOCK_RAW, IPPROTO_TCP);

	struct ip *ipHeader;
	char buffer[8192];

	while(recvfrom(sockfd,buffer,sizeof(buffer),0,NULL,NULL)>0)
	{
		ipHeader = (struct ip*)buffer;
        printf("ip packet recieved:");
	}
}