/**************************************************************************
 *
 *  Copyright 2015, 2017 Yuri Prokushev
 *
 *  This file is part of osFree project
 *
 *  This program is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU Lesser General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or (at your
 *  option) any later version.
 * 
 *  This program is distributed in the hope that it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#ifndef SOM_Module_sctdef_Source
#define SOM_Module_sctdef_Source
#endif

#define SOMTTypedefEntryC_Class_Source

#define __PRIVATE__
#include <rhbopt.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "rhbsc.h"

#include "sctdef.xih"

SOM_Scope long SOMLINK somtSetSymbolsOnEntry(SOMTTypedefEntryC SOMSTAR somSelf,
	                                           /* in */ SOMTEmitC SOMSTAR emitter,
	                                           /* in */ string prefix)
{
  SOMTTypedefEntryCData *somThis = SOMTTypedefEntryCGetData(somSelf);
  SOMTTypedefEntryCMethodDebug("SOMTTypedefEntryC","somtSetSymbolsOnEntry");
  
  return 0;
}

SOM_Scope SOMTEntryC SOMSTAR SOMLINK _get_somtTypedefType(SOMTTypedefEntryC SOMSTAR somSelf)
{
  SOMTTypedefEntryCData *somThis = SOMTTypedefEntryCGetData(somSelf);
  SOMTTypedefEntryCMethodDebug("SOMTTypedefEntryC","_get_somtTypedefType");
  
  return NULL;
}

SOM_Scope SOMTCommonEntryC SOMSTAR SOMLINK somtGetNextDeclarator(SOMTTypedefEntryC SOMSTAR somSelf)
{
  SOMTTypedefEntryCData *somThis = SOMTTypedefEntryCGetData(somSelf);
  SOMTTypedefEntryCMethodDebug("SOMTTypedefEntryC","somtGetNextDeclarator");
  
  return NULL;
}

SOM_Scope TypeCode SOMLINK _get_somtTypeCode(SOMTTypedefEntryC SOMSTAR somSelf)
{
  SOMTTypedefEntryCData *somThis = SOMTTypedefEntryCGetData(somSelf);
  SOMTTypedefEntryCMethodDebug("SOMTTypedefEntryC","_get_somtTypeCode");
  
  return 0;
}

SOM_Scope SOMTCommonEntryC SOMSTAR SOMLINK somtGetFirstDeclarator(SOMTTypedefEntryC SOMSTAR somSelf)
{
  SOMTTypedefEntryCData *somThis = SOMTTypedefEntryCGetData(somSelf);
  SOMTTypedefEntryCMethodDebug("SOMTTypedefEntryC","somtGetFirstDeclarator");
  
  return NULL;
}
