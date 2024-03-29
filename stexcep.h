/* generated from stexcep.idl */
/* internal conditional is SOM_Module_stexcep_Source */
#ifndef SOM_Module_stexcep_Header_h
	#define SOM_Module_stexcep_Header_h 1
	#include <som.h>
	#include <somdtype.h>
	#include <somobj.h>
	#include <containd.h>
#define ex_StExcep_UNKNOWN   "::StExcep::UNKNOWN"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_UNKNOWN
#ifndef ex_UNKNOWN
#define ex_UNKNOWN  ex_StExcep_UNKNOWN
#else
#define SOMTGD_ex_UNKNOWN
#undef ex_UNKNOWN
#endif /* ex_UNKNOWN */
#endif /* SOMTGD_ex_UNKNOWN */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_UNKNOWN
{
	unsigned long minor;
	completion_status completed;
} StExcep_UNKNOWN;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_UNKNOWN
		#if defined(UNKNOWN)
			#undef UNKNOWN
			#define SOMGD_UNKNOWN
		#else
			#define UNKNOWN StExcep_UNKNOWN
		#endif
	#endif /* SOMGD_UNKNOWN */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_BAD_PARAM   "::StExcep::BAD_PARAM"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_BAD_PARAM
#ifndef ex_BAD_PARAM
#define ex_BAD_PARAM  ex_StExcep_BAD_PARAM
#else
#define SOMTGD_ex_BAD_PARAM
#undef ex_BAD_PARAM
#endif /* ex_BAD_PARAM */
#endif /* SOMTGD_ex_BAD_PARAM */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_BAD_PARAM
{
	unsigned long minor;
	completion_status completed;
} StExcep_BAD_PARAM;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_BAD_PARAM
		#if defined(BAD_PARAM)
			#undef BAD_PARAM
			#define SOMGD_BAD_PARAM
		#else
			#define BAD_PARAM StExcep_BAD_PARAM
		#endif
	#endif /* SOMGD_BAD_PARAM */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_NO_MEMORY   "::StExcep::NO_MEMORY"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_NO_MEMORY
#ifndef ex_NO_MEMORY
#define ex_NO_MEMORY  ex_StExcep_NO_MEMORY
#else
#define SOMTGD_ex_NO_MEMORY
#undef ex_NO_MEMORY
#endif /* ex_NO_MEMORY */
#endif /* SOMTGD_ex_NO_MEMORY */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_NO_MEMORY
{
	unsigned long minor;
	completion_status completed;
} StExcep_NO_MEMORY;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_NO_MEMORY
		#if defined(NO_MEMORY)
			#undef NO_MEMORY
			#define SOMGD_NO_MEMORY
		#else
			#define NO_MEMORY StExcep_NO_MEMORY
		#endif
	#endif /* SOMGD_NO_MEMORY */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_IMP_LIMIT   "::StExcep::IMP_LIMIT"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_IMP_LIMIT
#ifndef ex_IMP_LIMIT
#define ex_IMP_LIMIT  ex_StExcep_IMP_LIMIT
#else
#define SOMTGD_ex_IMP_LIMIT
#undef ex_IMP_LIMIT
#endif /* ex_IMP_LIMIT */
#endif /* SOMTGD_ex_IMP_LIMIT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_IMP_LIMIT
{
	unsigned long minor;
	completion_status completed;
} StExcep_IMP_LIMIT;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_IMP_LIMIT
		#if defined(IMP_LIMIT)
			#undef IMP_LIMIT
			#define SOMGD_IMP_LIMIT
		#else
			#define IMP_LIMIT StExcep_IMP_LIMIT
		#endif
	#endif /* SOMGD_IMP_LIMIT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_COMM_FAILURE   "::StExcep::COMM_FAILURE"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_COMM_FAILURE
#ifndef ex_COMM_FAILURE
#define ex_COMM_FAILURE  ex_StExcep_COMM_FAILURE
#else
#define SOMTGD_ex_COMM_FAILURE
#undef ex_COMM_FAILURE
#endif /* ex_COMM_FAILURE */
#endif /* SOMTGD_ex_COMM_FAILURE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_COMM_FAILURE
{
	unsigned long minor;
	completion_status completed;
} StExcep_COMM_FAILURE;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_COMM_FAILURE
		#if defined(COMM_FAILURE)
			#undef COMM_FAILURE
			#define SOMGD_COMM_FAILURE
		#else
			#define COMM_FAILURE StExcep_COMM_FAILURE
		#endif
	#endif /* SOMGD_COMM_FAILURE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INV_OBJREF   "::StExcep::INV_OBJREF"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INV_OBJREF
#ifndef ex_INV_OBJREF
#define ex_INV_OBJREF  ex_StExcep_INV_OBJREF
#else
#define SOMTGD_ex_INV_OBJREF
#undef ex_INV_OBJREF
#endif /* ex_INV_OBJREF */
#endif /* SOMTGD_ex_INV_OBJREF */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INV_OBJREF
{
	unsigned long minor;
	completion_status completed;
} StExcep_INV_OBJREF;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INV_OBJREF
		#if defined(INV_OBJREF)
			#undef INV_OBJREF
			#define SOMGD_INV_OBJREF
		#else
			#define INV_OBJREF StExcep_INV_OBJREF
		#endif
	#endif /* SOMGD_INV_OBJREF */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_NO_PERMISSION   "::StExcep::NO_PERMISSION"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_NO_PERMISSION
#ifndef ex_NO_PERMISSION
#define ex_NO_PERMISSION  ex_StExcep_NO_PERMISSION
#else
#define SOMTGD_ex_NO_PERMISSION
#undef ex_NO_PERMISSION
#endif /* ex_NO_PERMISSION */
#endif /* SOMTGD_ex_NO_PERMISSION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_NO_PERMISSION
{
	unsigned long minor;
	completion_status completed;
} StExcep_NO_PERMISSION;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_NO_PERMISSION
		#if defined(NO_PERMISSION)
			#undef NO_PERMISSION
			#define SOMGD_NO_PERMISSION
		#else
			#define NO_PERMISSION StExcep_NO_PERMISSION
		#endif
	#endif /* SOMGD_NO_PERMISSION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INTERNAL   "::StExcep::INTERNAL"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INTERNAL
#ifndef ex_INTERNAL
#define ex_INTERNAL  ex_StExcep_INTERNAL
#else
#define SOMTGD_ex_INTERNAL
#undef ex_INTERNAL
#endif /* ex_INTERNAL */
#endif /* SOMTGD_ex_INTERNAL */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INTERNAL
{
	unsigned long minor;
	completion_status completed;
} StExcep_INTERNAL;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INTERNAL
		#if defined(INTERNAL)
			#undef INTERNAL
			#define SOMGD_INTERNAL
		#else
			#define INTERNAL StExcep_INTERNAL
		#endif
	#endif /* SOMGD_INTERNAL */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_MARSHAL   "::StExcep::MARSHAL"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_MARSHAL
#ifndef ex_MARSHAL
#define ex_MARSHAL  ex_StExcep_MARSHAL
#else
#define SOMTGD_ex_MARSHAL
#undef ex_MARSHAL
#endif /* ex_MARSHAL */
#endif /* SOMTGD_ex_MARSHAL */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_MARSHAL
{
	unsigned long minor;
	completion_status completed;
} StExcep_MARSHAL;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_MARSHAL
		#if defined(MARSHAL)
			#undef MARSHAL
			#define SOMGD_MARSHAL
		#else
			#define MARSHAL StExcep_MARSHAL
		#endif
	#endif /* SOMGD_MARSHAL */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INITIALIZE   "::StExcep::INITIALIZE"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INITIALIZE
#ifndef ex_INITIALIZE
#define ex_INITIALIZE  ex_StExcep_INITIALIZE
#else
#define SOMTGD_ex_INITIALIZE
#undef ex_INITIALIZE
#endif /* ex_INITIALIZE */
#endif /* SOMTGD_ex_INITIALIZE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INITIALIZE
{
	unsigned long minor;
	completion_status completed;
} StExcep_INITIALIZE;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INITIALIZE
		#if defined(INITIALIZE)
			#undef INITIALIZE
			#define SOMGD_INITIALIZE
		#else
			#define INITIALIZE StExcep_INITIALIZE
		#endif
	#endif /* SOMGD_INITIALIZE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_NO_IMPLEMENT   "::StExcep::NO_IMPLEMENT"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_NO_IMPLEMENT
#ifndef ex_NO_IMPLEMENT
#define ex_NO_IMPLEMENT  ex_StExcep_NO_IMPLEMENT
#else
#define SOMTGD_ex_NO_IMPLEMENT
#undef ex_NO_IMPLEMENT
#endif /* ex_NO_IMPLEMENT */
#endif /* SOMTGD_ex_NO_IMPLEMENT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_NO_IMPLEMENT
{
	unsigned long minor;
	completion_status completed;
} StExcep_NO_IMPLEMENT;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_NO_IMPLEMENT
		#if defined(NO_IMPLEMENT)
			#undef NO_IMPLEMENT
			#define SOMGD_NO_IMPLEMENT
		#else
			#define NO_IMPLEMENT StExcep_NO_IMPLEMENT
		#endif
	#endif /* SOMGD_NO_IMPLEMENT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_BAD_TYPECODE   "::StExcep::BAD_TYPECODE"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_BAD_TYPECODE
#ifndef ex_BAD_TYPECODE
#define ex_BAD_TYPECODE  ex_StExcep_BAD_TYPECODE
#else
#define SOMTGD_ex_BAD_TYPECODE
#undef ex_BAD_TYPECODE
#endif /* ex_BAD_TYPECODE */
#endif /* SOMTGD_ex_BAD_TYPECODE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_BAD_TYPECODE
{
	unsigned long minor;
	completion_status completed;
} StExcep_BAD_TYPECODE;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_BAD_TYPECODE
		#if defined(BAD_TYPECODE)
			#undef BAD_TYPECODE
			#define SOMGD_BAD_TYPECODE
		#else
			#define BAD_TYPECODE StExcep_BAD_TYPECODE
		#endif
	#endif /* SOMGD_BAD_TYPECODE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_BAD_OPERATION   "::StExcep::BAD_OPERATION"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_BAD_OPERATION
#ifndef ex_BAD_OPERATION
#define ex_BAD_OPERATION  ex_StExcep_BAD_OPERATION
#else
#define SOMTGD_ex_BAD_OPERATION
#undef ex_BAD_OPERATION
#endif /* ex_BAD_OPERATION */
#endif /* SOMTGD_ex_BAD_OPERATION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_BAD_OPERATION
{
	unsigned long minor;
	completion_status completed;
} StExcep_BAD_OPERATION;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_BAD_OPERATION
		#if defined(BAD_OPERATION)
			#undef BAD_OPERATION
			#define SOMGD_BAD_OPERATION
		#else
			#define BAD_OPERATION StExcep_BAD_OPERATION
		#endif
	#endif /* SOMGD_BAD_OPERATION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_NO_RESOURCES   "::StExcep::NO_RESOURCES"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_NO_RESOURCES
#ifndef ex_NO_RESOURCES
#define ex_NO_RESOURCES  ex_StExcep_NO_RESOURCES
#else
#define SOMTGD_ex_NO_RESOURCES
#undef ex_NO_RESOURCES
#endif /* ex_NO_RESOURCES */
#endif /* SOMTGD_ex_NO_RESOURCES */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_NO_RESOURCES
{
	unsigned long minor;
	completion_status completed;
} StExcep_NO_RESOURCES;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_NO_RESOURCES
		#if defined(NO_RESOURCES)
			#undef NO_RESOURCES
			#define SOMGD_NO_RESOURCES
		#else
			#define NO_RESOURCES StExcep_NO_RESOURCES
		#endif
	#endif /* SOMGD_NO_RESOURCES */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_NO_RESPONSE   "::StExcep::NO_RESPONSE"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_NO_RESPONSE
#ifndef ex_NO_RESPONSE
#define ex_NO_RESPONSE  ex_StExcep_NO_RESPONSE
#else
#define SOMTGD_ex_NO_RESPONSE
#undef ex_NO_RESPONSE
#endif /* ex_NO_RESPONSE */
#endif /* SOMTGD_ex_NO_RESPONSE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_NO_RESPONSE
{
	unsigned long minor;
	completion_status completed;
} StExcep_NO_RESPONSE;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_NO_RESPONSE
		#if defined(NO_RESPONSE)
			#undef NO_RESPONSE
			#define SOMGD_NO_RESPONSE
		#else
			#define NO_RESPONSE StExcep_NO_RESPONSE
		#endif
	#endif /* SOMGD_NO_RESPONSE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_PERSIST_STORE   "::StExcep::PERSIST_STORE"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_PERSIST_STORE
#ifndef ex_PERSIST_STORE
#define ex_PERSIST_STORE  ex_StExcep_PERSIST_STORE
#else
#define SOMTGD_ex_PERSIST_STORE
#undef ex_PERSIST_STORE
#endif /* ex_PERSIST_STORE */
#endif /* SOMTGD_ex_PERSIST_STORE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_PERSIST_STORE
{
	unsigned long minor;
	completion_status completed;
} StExcep_PERSIST_STORE;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_PERSIST_STORE
		#if defined(PERSIST_STORE)
			#undef PERSIST_STORE
			#define SOMGD_PERSIST_STORE
		#else
			#define PERSIST_STORE StExcep_PERSIST_STORE
		#endif
	#endif /* SOMGD_PERSIST_STORE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_BAD_INV_ORDER   "::StExcep::BAD_INV_ORDER"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_BAD_INV_ORDER
#ifndef ex_BAD_INV_ORDER
#define ex_BAD_INV_ORDER  ex_StExcep_BAD_INV_ORDER
#else
#define SOMTGD_ex_BAD_INV_ORDER
#undef ex_BAD_INV_ORDER
#endif /* ex_BAD_INV_ORDER */
#endif /* SOMTGD_ex_BAD_INV_ORDER */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_BAD_INV_ORDER
{
	unsigned long minor;
	completion_status completed;
} StExcep_BAD_INV_ORDER;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_BAD_INV_ORDER
		#if defined(BAD_INV_ORDER)
			#undef BAD_INV_ORDER
			#define SOMGD_BAD_INV_ORDER
		#else
			#define BAD_INV_ORDER StExcep_BAD_INV_ORDER
		#endif
	#endif /* SOMGD_BAD_INV_ORDER */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_TRANSIENT   "::StExcep::TRANSIENT"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_TRANSIENT
#ifndef ex_TRANSIENT
#define ex_TRANSIENT  ex_StExcep_TRANSIENT
#else
#define SOMTGD_ex_TRANSIENT
#undef ex_TRANSIENT
#endif /* ex_TRANSIENT */
#endif /* SOMTGD_ex_TRANSIENT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_TRANSIENT
{
	unsigned long minor;
	completion_status completed;
} StExcep_TRANSIENT;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_TRANSIENT
		#if defined(TRANSIENT)
			#undef TRANSIENT
			#define SOMGD_TRANSIENT
		#else
			#define TRANSIENT StExcep_TRANSIENT
		#endif
	#endif /* SOMGD_TRANSIENT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_FREE_MEM   "::StExcep::FREE_MEM"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_FREE_MEM
#ifndef ex_FREE_MEM
#define ex_FREE_MEM  ex_StExcep_FREE_MEM
#else
#define SOMTGD_ex_FREE_MEM
#undef ex_FREE_MEM
#endif /* ex_FREE_MEM */
#endif /* SOMTGD_ex_FREE_MEM */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_FREE_MEM
{
	unsigned long minor;
	completion_status completed;
} StExcep_FREE_MEM;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_FREE_MEM
		#if defined(FREE_MEM)
			#undef FREE_MEM
			#define SOMGD_FREE_MEM
		#else
			#define FREE_MEM StExcep_FREE_MEM
		#endif
	#endif /* SOMGD_FREE_MEM */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INV_IDENT   "::StExcep::INV_IDENT"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INV_IDENT
#ifndef ex_INV_IDENT
#define ex_INV_IDENT  ex_StExcep_INV_IDENT
#else
#define SOMTGD_ex_INV_IDENT
#undef ex_INV_IDENT
#endif /* ex_INV_IDENT */
#endif /* SOMTGD_ex_INV_IDENT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INV_IDENT
{
	unsigned long minor;
	completion_status completed;
} StExcep_INV_IDENT;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INV_IDENT
		#if defined(INV_IDENT)
			#undef INV_IDENT
			#define SOMGD_INV_IDENT
		#else
			#define INV_IDENT StExcep_INV_IDENT
		#endif
	#endif /* SOMGD_INV_IDENT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INV_FLAG   "::StExcep::INV_FLAG"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INV_FLAG
#ifndef ex_INV_FLAG
#define ex_INV_FLAG  ex_StExcep_INV_FLAG
#else
#define SOMTGD_ex_INV_FLAG
#undef ex_INV_FLAG
#endif /* ex_INV_FLAG */
#endif /* SOMTGD_ex_INV_FLAG */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INV_FLAG
{
	unsigned long minor;
	completion_status completed;
} StExcep_INV_FLAG;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INV_FLAG
		#if defined(INV_FLAG)
			#undef INV_FLAG
			#define SOMGD_INV_FLAG
		#else
			#define INV_FLAG StExcep_INV_FLAG
		#endif
	#endif /* SOMGD_INV_FLAG */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INTF_REPOS   "::StExcep::INTF_REPOS"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INTF_REPOS
#ifndef ex_INTF_REPOS
#define ex_INTF_REPOS  ex_StExcep_INTF_REPOS
#else
#define SOMTGD_ex_INTF_REPOS
#undef ex_INTF_REPOS
#endif /* ex_INTF_REPOS */
#endif /* SOMTGD_ex_INTF_REPOS */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INTF_REPOS
{
	unsigned long minor;
	completion_status completed;
} StExcep_INTF_REPOS;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INTF_REPOS
		#if defined(INTF_REPOS)
			#undef INTF_REPOS
			#define SOMGD_INTF_REPOS
		#else
			#define INTF_REPOS StExcep_INTF_REPOS
		#endif
	#endif /* SOMGD_INTF_REPOS */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_BAD_CONTEXT   "::StExcep::BAD_CONTEXT"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_BAD_CONTEXT
#ifndef ex_BAD_CONTEXT
#define ex_BAD_CONTEXT  ex_StExcep_BAD_CONTEXT
#else
#define SOMTGD_ex_BAD_CONTEXT
#undef ex_BAD_CONTEXT
#endif /* ex_BAD_CONTEXT */
#endif /* SOMTGD_ex_BAD_CONTEXT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_BAD_CONTEXT
{
	unsigned long minor;
	completion_status completed;
} StExcep_BAD_CONTEXT;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_BAD_CONTEXT
		#if defined(BAD_CONTEXT)
			#undef BAD_CONTEXT
			#define SOMGD_BAD_CONTEXT
		#else
			#define BAD_CONTEXT StExcep_BAD_CONTEXT
		#endif
	#endif /* SOMGD_BAD_CONTEXT */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_OBJ_ADAPTER   "::StExcep::OBJ_ADAPTER"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_OBJ_ADAPTER
#ifndef ex_OBJ_ADAPTER
#define ex_OBJ_ADAPTER  ex_StExcep_OBJ_ADAPTER
#else
#define SOMTGD_ex_OBJ_ADAPTER
#undef ex_OBJ_ADAPTER
#endif /* ex_OBJ_ADAPTER */
#endif /* SOMTGD_ex_OBJ_ADAPTER */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_OBJ_ADAPTER
{
	unsigned long minor;
	completion_status completed;
} StExcep_OBJ_ADAPTER;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_OBJ_ADAPTER
		#if defined(OBJ_ADAPTER)
			#undef OBJ_ADAPTER
			#define SOMGD_OBJ_ADAPTER
		#else
			#define OBJ_ADAPTER StExcep_OBJ_ADAPTER
		#endif
	#endif /* SOMGD_OBJ_ADAPTER */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_DATA_CONVERSION   "::StExcep::DATA_CONVERSION"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_DATA_CONVERSION
#ifndef ex_DATA_CONVERSION
#define ex_DATA_CONVERSION  ex_StExcep_DATA_CONVERSION
#else
#define SOMTGD_ex_DATA_CONVERSION
#undef ex_DATA_CONVERSION
#endif /* ex_DATA_CONVERSION */
#endif /* SOMTGD_ex_DATA_CONVERSION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_DATA_CONVERSION
{
	unsigned long minor;
	completion_status completed;
} StExcep_DATA_CONVERSION;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_DATA_CONVERSION
		#if defined(DATA_CONVERSION)
			#undef DATA_CONVERSION
			#define SOMGD_DATA_CONVERSION
		#else
			#define DATA_CONVERSION StExcep_DATA_CONVERSION
		#endif
	#endif /* SOMGD_DATA_CONVERSION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_OBJECT_NOT_EXIST   "::StExcep::OBJECT_NOT_EXIST"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_OBJECT_NOT_EXIST
#ifndef ex_OBJECT_NOT_EXIST
#define ex_OBJECT_NOT_EXIST  ex_StExcep_OBJECT_NOT_EXIST
#else
#define SOMTGD_ex_OBJECT_NOT_EXIST
#undef ex_OBJECT_NOT_EXIST
#endif /* ex_OBJECT_NOT_EXIST */
#endif /* SOMTGD_ex_OBJECT_NOT_EXIST */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_OBJECT_NOT_EXIST
{
	unsigned long minor;
	completion_status completed;
} StExcep_OBJECT_NOT_EXIST;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_OBJECT_NOT_EXIST
		#if defined(OBJECT_NOT_EXIST)
			#undef OBJECT_NOT_EXIST
			#define SOMGD_OBJECT_NOT_EXIST
		#else
			#define OBJECT_NOT_EXIST StExcep_OBJECT_NOT_EXIST
		#endif
	#endif /* SOMGD_OBJECT_NOT_EXIST */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_TRANSACTION_REQUIRED   "::StExcep::TRANSACTION_REQUIRED"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_TRANSACTION_REQUIRED
#ifndef ex_TRANSACTION_REQUIRED
#define ex_TRANSACTION_REQUIRED  ex_StExcep_TRANSACTION_REQUIRED
#else
#define SOMTGD_ex_TRANSACTION_REQUIRED
#undef ex_TRANSACTION_REQUIRED
#endif /* ex_TRANSACTION_REQUIRED */
#endif /* SOMTGD_ex_TRANSACTION_REQUIRED */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_TRANSACTION_REQUIRED
{
	unsigned long minor;
	completion_status completed;
} StExcep_TRANSACTION_REQUIRED;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_TRANSACTION_REQUIRED
		#if defined(TRANSACTION_REQUIRED)
			#undef TRANSACTION_REQUIRED
			#define SOMGD_TRANSACTION_REQUIRED
		#else
			#define TRANSACTION_REQUIRED StExcep_TRANSACTION_REQUIRED
		#endif
	#endif /* SOMGD_TRANSACTION_REQUIRED */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_TRANSACTION_ROLLEDBACK   "::StExcep::TRANSACTION_ROLLEDBACK"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_TRANSACTION_ROLLEDBACK
#ifndef ex_TRANSACTION_ROLLEDBACK
#define ex_TRANSACTION_ROLLEDBACK  ex_StExcep_TRANSACTION_ROLLEDBACK
#else
#define SOMTGD_ex_TRANSACTION_ROLLEDBACK
#undef ex_TRANSACTION_ROLLEDBACK
#endif /* ex_TRANSACTION_ROLLEDBACK */
#endif /* SOMTGD_ex_TRANSACTION_ROLLEDBACK */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_TRANSACTION_ROLLEDBACK
{
	unsigned long minor;
	completion_status completed;
} StExcep_TRANSACTION_ROLLEDBACK;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_TRANSACTION_ROLLEDBACK
		#if defined(TRANSACTION_ROLLEDBACK)
			#undef TRANSACTION_ROLLEDBACK
			#define SOMGD_TRANSACTION_ROLLEDBACK
		#else
			#define TRANSACTION_ROLLEDBACK StExcep_TRANSACTION_ROLLEDBACK
		#endif
	#endif /* SOMGD_TRANSACTION_ROLLEDBACK */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INVALID_TRANSACTION   "::StExcep::INVALID_TRANSACTION"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INVALID_TRANSACTION
#ifndef ex_INVALID_TRANSACTION
#define ex_INVALID_TRANSACTION  ex_StExcep_INVALID_TRANSACTION
#else
#define SOMTGD_ex_INVALID_TRANSACTION
#undef ex_INVALID_TRANSACTION
#endif /* ex_INVALID_TRANSACTION */
#endif /* SOMTGD_ex_INVALID_TRANSACTION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INVALID_TRANSACTION
{
	unsigned long minor;
	completion_status completed;
} StExcep_INVALID_TRANSACTION;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INVALID_TRANSACTION
		#if defined(INVALID_TRANSACTION)
			#undef INVALID_TRANSACTION
			#define SOMGD_INVALID_TRANSACTION
		#else
			#define INVALID_TRANSACTION StExcep_INVALID_TRANSACTION
		#endif
	#endif /* SOMGD_INVALID_TRANSACTION */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_INV_POLICY   "::StExcep::INV_POLICY"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_INV_POLICY
#ifndef ex_INV_POLICY
#define ex_INV_POLICY  ex_StExcep_INV_POLICY
#else
#define SOMTGD_ex_INV_POLICY
#undef ex_INV_POLICY
#endif /* ex_INV_POLICY */
#endif /* SOMTGD_ex_INV_POLICY */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_INV_POLICY
{
	unsigned long minor;
	completion_status completed;
} StExcep_INV_POLICY;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_INV_POLICY
		#if defined(INV_POLICY)
			#undef INV_POLICY
			#define SOMGD_INV_POLICY
		#else
			#define INV_POLICY StExcep_INV_POLICY
		#endif
	#endif /* SOMGD_INV_POLICY */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#define ex_StExcep_CODESET_INCOMPATIBLE   "::StExcep::CODESET_INCOMPATIBLE"
#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_ex_CODESET_INCOMPATIBLE
#ifndef ex_CODESET_INCOMPATIBLE
#define ex_CODESET_INCOMPATIBLE  ex_StExcep_CODESET_INCOMPATIBLE
#else
#define SOMTGD_ex_CODESET_INCOMPATIBLE
#undef ex_CODESET_INCOMPATIBLE
#endif /* ex_CODESET_INCOMPATIBLE */
#endif /* SOMTGD_ex_CODESET_INCOMPATIBLE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
typedef struct StExcep_CODESET_INCOMPATIBLE
{
	unsigned long minor;
	completion_status completed;
} StExcep_CODESET_INCOMPATIBLE;
#ifndef SOM_DONT_USE_SHORT_NAMES
	#ifndef SOMGD_CODESET_INCOMPATIBLE
		#if defined(CODESET_INCOMPATIBLE)
			#undef CODESET_INCOMPATIBLE
			#define SOMGD_CODESET_INCOMPATIBLE
		#else
			#define CODESET_INCOMPATIBLE StExcep_CODESET_INCOMPATIBLE
		#endif
	#endif /* SOMGD_CODESET_INCOMPATIBLE */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#endif /* SOM_Module_stexcep_Header_h */
