#ifndef __BOLT_CONNECTION_H
#define __BOLT_CONNECTION_H

int bolt_init_connections();
bolt_connection_t *bolt_create_connection(int sock);
void bolt_free_connection(bolt_connection_t *c);
void bolt_connection_begin_send(bolt_connection_t *c);

#endif
