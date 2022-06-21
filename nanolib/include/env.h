#ifndef NANOLIB_ENV_H
#define NANOLIB_ENV_H

#include "conf.h"

#define NANOMQ_BROKER_URL "NANOMQ_BROKER_URL"
#define NANOMQ_DAEMON "NANOMQ_DAEMON"
#define NANOMQ_NUM_TASKQ_THREAD "NANOMQ_MAX_TASKQ_THREAD"
#define NANOMQ_MAX_TASKQ_THREAD "NANOMQ_MAX_TASKQ_THREAD"
#define NANOMQ_PARALLEL "NANOMQ_PARALLEL"
#define NANOMQ_PROPERTY_SIZE "NANOMQ_PROPERTY_SIZE"
#define NANOMQ_MAX_PACKET_SIZE "NANOMQ_MAX_PACKET_SIZE"
#define NANOMQ_CLIENT_MAX_PACKET_SIZE "NANOMQ_CLIENT_MAX_PACKET_SIZE"
#define NANOMQ_MSQ_LEN "NANOMQ_MSQ_LEN"
#define NANOMQ_QOS_DURATION "NANOMQ_QOS_DURATION"
#define NANOMQ_ALLOW_ANONYMOUS "NANOMQ_ALLOW_ANONYMOUS"
#define NANOMQ_MSG_PERSISTENCE "NANOMQ_MSG_PERSISTENCE"

#define NANOMQ_WEBSOCKET_ENABLE "NANOMQ_WEBSOCKET_ENABLE"
#define NANOMQ_WEBSOCKET_URL "NANOMQ_WEBSOCKET_URL"
#define NANOMQ_WEBSOCKET_TLS_URL "NANOMQ_WEBSOCKET_TLS_URL"

#define NANOMQ_HTTP_SERVER_ENABLE "NANOMQ_HTTP_SERVER_ENABLE"
#define NANOMQ_HTTP_SERVER_PORT "NANOMQ_HTTP_SERVER_PORT"
#define NANOMQ_HTTP_SERVER_PARALLEL "NANOMQ_HTTP_SERVER_PARALLEL"
#define NANOMQ_HTTP_SERVER_USERNAME "NANOMQ_HTTP_SERVER_USERNAME"
#define NANOMQ_HTTP_SERVER_PASSWORD "NANOMQ_HTTP_SERVER_PASSWORD"
#define NANOMQ_HTTP_SERVER_AUTH_TYPE "NANOMQ_HTTP_SERVER_AUTH_TYPE"
#define NANOMQ_HTTP_SERVER_JWT_PUBLIC_KEYFILE \
	"NANOMQ_HTTP_SERVER_JWT_PUBLIC_KEYFILE"
#define NANOMQ_HTTP_SERVER_JWT_PRIVATE_KEYFILE \
	"NANOMQ_HTTP_SERVER_JWT_PRIVATE_KEYFILE"

#define NANOMQ_TLS_ENABLE "NANOMQ_TLS_ENABLE"
#define NANOMQ_TLS_URL "NANOMQ_TLS_URL"
#define NANOMQ_TLS_CA_CERT_PATH "NANOMQ_TLS_CA_CERT_PATH"
#define NANOMQ_TLS_CERT_PATH "NANOMQ_TLS_CERT_PATH"
#define NANOMQ_TLS_KEY_PATH "NANOMQ_TLS_KEY_PATH"
#define NANOMQ_TLS_KEY_PASSWORD "NANOMQ_TLS_KEY_PASSWORD"
#define NANOMQ_TLS_VERIFY_PEER "NANOMQ_TLS_VERIFY_PEER"
#define NANOMQ_TLS_FAIL_IF_NO_PEER_CERT "NANOMQ_TLS_FAIL_IF_NO_PEER_CERT"

#define NANOMQ_CONF_PATH "NANOMQ_CONF_PATH"
#define NANOMQ_BRIDGE_CONF_PATH "NANOMQ_BRIDGE_CONF_PATH"
#define NANOMQ_WEBHOOK_CONF_PATH "NANOMQ_WEBHOOK_CONF_PATH"
#define NANOMQ_AUTH_HTTP_CONF_PATH "NANOMQ_AUTH_HTTP_CONF_PATH"
#define NANOMQ_RULE_ENGINE_CONF_PATH "NANOMQ_RULE_ENGINE_CONF_PATH" 
#define NANOMQ_AUTH_CONF_PATH "NANOMQ_AUTH_CONF_PATH"
#define NANOMQ_SQLITE_CONF_PATH "NANOMQ_AUTH_CONF_PATH"

extern void read_env_conf(conf *config);

#endif