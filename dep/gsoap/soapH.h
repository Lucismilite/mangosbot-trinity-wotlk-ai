/* soapH.h
   Generated by gSOAP 2.8.33 for gsoap.stub

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapH_H
#define soapH_H
#include "soapStub.h"
#ifndef WITH_NOIDREF

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

SOAP_FMAC3 const char ** SOAP_FMAC4 soap_faultcode(struct soap *soap);
SOAP_FMAC3 void * SOAP_FMAC4 soap_instantiate(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fdelete(struct soap_clist*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fbase(int, int);
SOAP_FMAC3 void SOAP_FMAC4 soap_finsert(struct soap*, int, int, void*, size_t, const void*, void**);

#ifndef SOAP_TYPE_byte_DEFINED
#define SOAP_TYPE_byte_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);

inline int soap_write_byte(struct soap *soap, char const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_byte(soap, p, "byte", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);

inline int soap_read_byte(struct soap *soap, char *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_byte(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_int_DEFINED
#define SOAP_TYPE_int_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);

inline int soap_write_int(struct soap *soap, int const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_int(soap, p, "int", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);

inline int soap_read_int(struct soap *soap, int *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_int(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault_DEFINED
#define SOAP_TYPE_SOAP_ENV__Fault_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Fault * soap_new_SOAP_ENV__Fault(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Fault(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Fault * soap_new_req_SOAP_ENV__Fault(
	struct soap *soap)
{
	struct SOAP_ENV__Fault *_p = soap_new_SOAP_ENV__Fault(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Fault(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Fault * soap_new_set_SOAP_ENV__Fault(
	struct soap *soap,
	char *faultcode,
	char *faultstring,
	char *faultactor,
	struct SOAP_ENV__Detail *detail,
	struct SOAP_ENV__Code *SOAP_ENV__Code,
	struct SOAP_ENV__Reason *SOAP_ENV__Reason,
	char *SOAP_ENV__Node,
	char *SOAP_ENV__Role,
	struct SOAP_ENV__Detail *SOAP_ENV__Detail)
{
	struct SOAP_ENV__Fault *_p = soap_new_SOAP_ENV__Fault(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Fault(soap, _p);
		_p->faultcode = faultcode;
		_p->faultstring = faultstring;
		_p->faultactor = faultactor;
		_p->detail = detail;
		_p->SOAP_ENV__Code = SOAP_ENV__Code;
		_p->SOAP_ENV__Reason = SOAP_ENV__Reason;
		_p->SOAP_ENV__Node = SOAP_ENV__Node;
		_p->SOAP_ENV__Role = SOAP_ENV__Role;
		_p->SOAP_ENV__Detail = SOAP_ENV__Detail;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);

inline int soap_write_SOAP_ENV__Fault(struct soap *soap, struct SOAP_ENV__Fault const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Fault(soap, p), 0) || soap_put_SOAP_ENV__Fault(soap, p, "SOAP-ENV:Fault", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);

inline int soap_read_SOAP_ENV__Fault(struct soap *soap, struct SOAP_ENV__Fault *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Fault(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Fault(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason_DEFINED
#define SOAP_TYPE_SOAP_ENV__Reason_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Reason * soap_new_SOAP_ENV__Reason(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Reason(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Reason * soap_new_req_SOAP_ENV__Reason(
	struct soap *soap)
{
	struct SOAP_ENV__Reason *_p = soap_new_SOAP_ENV__Reason(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Reason(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Reason * soap_new_set_SOAP_ENV__Reason(
	struct soap *soap,
	char *SOAP_ENV__Text)
{
	struct SOAP_ENV__Reason *_p = soap_new_SOAP_ENV__Reason(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Reason(soap, _p);
		_p->SOAP_ENV__Text = SOAP_ENV__Text;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);

inline int soap_write_SOAP_ENV__Reason(struct soap *soap, struct SOAP_ENV__Reason const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Reason(soap, p), 0) || soap_put_SOAP_ENV__Reason(soap, p, "SOAP-ENV:Reason", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);

inline int soap_read_SOAP_ENV__Reason(struct soap *soap, struct SOAP_ENV__Reason *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Reason(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Reason(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail_DEFINED
#define SOAP_TYPE_SOAP_ENV__Detail_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Detail * soap_new_SOAP_ENV__Detail(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Detail(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Detail * soap_new_req_SOAP_ENV__Detail(
	struct soap *soap,
	int __type,
	void *fault)
{
	struct SOAP_ENV__Detail *_p = soap_new_SOAP_ENV__Detail(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Detail(soap, _p);
		_p->__type = __type;
		_p->fault = fault;
	}
	return _p;
}

inline struct SOAP_ENV__Detail * soap_new_set_SOAP_ENV__Detail(
	struct soap *soap,
	char *__any,
	int __type,
	void *fault)
{
	struct SOAP_ENV__Detail *_p = soap_new_SOAP_ENV__Detail(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Detail(soap, _p);
		_p->__any = __any;
		_p->__type = __type;
		_p->fault = fault;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);

inline int soap_write_SOAP_ENV__Detail(struct soap *soap, struct SOAP_ENV__Detail const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Detail(soap, p), 0) || soap_put_SOAP_ENV__Detail(soap, p, "SOAP-ENV:Detail", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);

inline int soap_read_SOAP_ENV__Detail(struct soap *soap, struct SOAP_ENV__Detail *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Detail(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Detail(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code_DEFINED
#define SOAP_TYPE_SOAP_ENV__Code_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Code * soap_new_SOAP_ENV__Code(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Code(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Code * soap_new_req_SOAP_ENV__Code(
	struct soap *soap)
{
	struct SOAP_ENV__Code *_p = soap_new_SOAP_ENV__Code(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Code(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Code * soap_new_set_SOAP_ENV__Code(
	struct soap *soap,
	char *SOAP_ENV__Value,
	struct SOAP_ENV__Code *SOAP_ENV__Subcode)
{
	struct SOAP_ENV__Code *_p = soap_new_SOAP_ENV__Code(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Code(soap, _p);
		_p->SOAP_ENV__Value = SOAP_ENV__Value;
		_p->SOAP_ENV__Subcode = SOAP_ENV__Subcode;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);

inline int soap_write_SOAP_ENV__Code(struct soap *soap, struct SOAP_ENV__Code const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Code(soap, p), 0) || soap_put_SOAP_ENV__Code(soap, p, "SOAP-ENV:Code", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);

inline int soap_read_SOAP_ENV__Code(struct soap *soap, struct SOAP_ENV__Code *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Code(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Code(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header_DEFINED
#define SOAP_TYPE_SOAP_ENV__Header_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Header * soap_new_SOAP_ENV__Header(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Header(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Header * soap_new_req_SOAP_ENV__Header(
	struct soap *soap)
{
	struct SOAP_ENV__Header *_p = soap_new_SOAP_ENV__Header(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Header(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Header * soap_new_set_SOAP_ENV__Header(
	struct soap *soap)
{
	struct SOAP_ENV__Header *_p = soap_new_SOAP_ENV__Header(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Header(soap, _p);
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);

inline int soap_write_SOAP_ENV__Header(struct soap *soap, struct SOAP_ENV__Header const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Header(soap, p), 0) || soap_put_SOAP_ENV__Header(soap, p, "SOAP-ENV:Header", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);

inline int soap_read_SOAP_ENV__Header(struct soap *soap, struct SOAP_ENV__Header *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Header(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Header(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef SOAP_TYPE_ns1__executeCommand_DEFINED
#define SOAP_TYPE_ns1__executeCommand_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__executeCommand(struct soap*, struct ns1__executeCommand *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__executeCommand(struct soap*, const struct ns1__executeCommand *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__executeCommand(struct soap*, const char*, int, const struct ns1__executeCommand *, const char*);
SOAP_FMAC3 struct ns1__executeCommand * SOAP_FMAC4 soap_in_ns1__executeCommand(struct soap*, const char*, struct ns1__executeCommand *, const char*);
SOAP_FMAC1 struct ns1__executeCommand * SOAP_FMAC2 soap_instantiate_ns1__executeCommand(struct soap*, int, const char*, const char*, size_t*);

inline struct ns1__executeCommand * soap_new_ns1__executeCommand(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns1__executeCommand(soap, n, NULL, NULL, NULL);
}

inline struct ns1__executeCommand * soap_new_req_ns1__executeCommand(
	struct soap *soap)
{
	struct ns1__executeCommand *_p = soap_new_ns1__executeCommand(soap);
	if (_p)
	{	soap_default_ns1__executeCommand(soap, _p);
	}
	return _p;
}

inline struct ns1__executeCommand * soap_new_set_ns1__executeCommand(
	struct soap *soap,
	char *command)
{
	struct ns1__executeCommand *_p = soap_new_ns1__executeCommand(soap);
	if (_p)
	{	soap_default_ns1__executeCommand(soap, _p);
		_p->command = command;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__executeCommand(struct soap*, const struct ns1__executeCommand *, const char*, const char*);

inline int soap_write_ns1__executeCommand(struct soap *soap, struct ns1__executeCommand const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_ns1__executeCommand(soap, p), 0) || soap_put_ns1__executeCommand(soap, p, "ns1:executeCommand", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct ns1__executeCommand * SOAP_FMAC4 soap_get_ns1__executeCommand(struct soap*, struct ns1__executeCommand *, const char*, const char*);

inline int soap_read_ns1__executeCommand(struct soap *soap, struct ns1__executeCommand *p)
{
	if (p)
	{	soap_default_ns1__executeCommand(soap, p);
		if (soap_begin_recv(soap) || soap_get_ns1__executeCommand(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns1__executeCommandResponse_DEFINED
#define SOAP_TYPE_ns1__executeCommandResponse_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__executeCommandResponse(struct soap*, struct ns1__executeCommandResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__executeCommandResponse(struct soap*, const struct ns1__executeCommandResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__executeCommandResponse(struct soap*, const char*, int, const struct ns1__executeCommandResponse *, const char*);
SOAP_FMAC3 struct ns1__executeCommandResponse * SOAP_FMAC4 soap_in_ns1__executeCommandResponse(struct soap*, const char*, struct ns1__executeCommandResponse *, const char*);
SOAP_FMAC1 struct ns1__executeCommandResponse * SOAP_FMAC2 soap_instantiate_ns1__executeCommandResponse(struct soap*, int, const char*, const char*, size_t*);

inline struct ns1__executeCommandResponse * soap_new_ns1__executeCommandResponse(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns1__executeCommandResponse(soap, n, NULL, NULL, NULL);
}

inline struct ns1__executeCommandResponse * soap_new_req_ns1__executeCommandResponse(
	struct soap *soap)
{
	struct ns1__executeCommandResponse *_p = soap_new_ns1__executeCommandResponse(soap);
	if (_p)
	{	soap_default_ns1__executeCommandResponse(soap, _p);
	}
	return _p;
}

inline struct ns1__executeCommandResponse * soap_new_set_ns1__executeCommandResponse(
	struct soap *soap,
	char **result)
{
	struct ns1__executeCommandResponse *_p = soap_new_ns1__executeCommandResponse(soap);
	if (_p)
	{	soap_default_ns1__executeCommandResponse(soap, _p);
		_p->result = result;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__executeCommandResponse(struct soap*, const struct ns1__executeCommandResponse *, const char*, const char*);

inline int soap_write_ns1__executeCommandResponse(struct soap *soap, struct ns1__executeCommandResponse const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_ns1__executeCommandResponse(soap, p), 0) || soap_put_ns1__executeCommandResponse(soap, p, "ns1:executeCommandResponse", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct ns1__executeCommandResponse * SOAP_FMAC4 soap_get_ns1__executeCommandResponse(struct soap*, struct ns1__executeCommandResponse *, const char*, const char*);

inline int soap_read_ns1__executeCommandResponse(struct soap *soap, struct ns1__executeCommandResponse *p)
{
	if (p)
	{	soap_default_ns1__executeCommandResponse(soap, p);
		if (soap_begin_recv(soap) || soap_get_ns1__executeCommandResponse(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason_DEFINED
#define SOAP_TYPE_PointerToSOAP_ENV__Reason_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail_DEFINED
#define SOAP_TYPE_PointerToSOAP_ENV__Detail_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code_DEFINED
#define SOAP_TYPE_PointerToSOAP_ENV__Code_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);
#endif

#endif

#ifndef SOAP_TYPE_PointerTostring_DEFINED
#define SOAP_TYPE_PointerTostring_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTostring(struct soap*, char **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTostring(struct soap*, const char *, int, char **const*, const char *);
SOAP_FMAC3 char *** SOAP_FMAC4 soap_in_PointerTostring(struct soap*, const char*, char ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTostring(struct soap*, char **const*, const char*, const char*);
SOAP_FMAC3 char *** SOAP_FMAC4 soap_get_PointerTostring(struct soap*, char ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE__XML_DEFINED
#define SOAP_TYPE__XML_DEFINED
#endif

#ifndef SOAP_TYPE__QName_DEFINED
#define SOAP_TYPE__QName_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default__QName(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__QName(struct soap*, char *const*);

#define soap__QName2s(soap, a) soap_QName2s(soap, (a))
SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);

#define soap_s2_QName(soap, s, a) soap_s2QName((soap), (s), (char**)(a), 0, -1, NULL)
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);

inline int soap_write__QName(struct soap *soap, char *const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put__QName(soap, p, "QName", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);

inline int soap_read__QName(struct soap *soap, char **p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get__QName(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_string_DEFINED
#define SOAP_TYPE_string_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);

#define soap_string2s(soap, a) (a)
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);

#define soap_s2string(soap, s, a) soap_s2char((soap), (s), (char**)(a), 0, -1, NULL)
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);

inline int soap_write_string(struct soap *soap, char *const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_string(soap, p, "string", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);

inline int soap_read_string(struct soap *soap, char **p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_string(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

/* End of soapH.h */
