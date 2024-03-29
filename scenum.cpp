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

#ifndef SOM_Module_scenum_Source
#define SOM_Module_scenum_Source
#endif

#define SOMTEnumEntryC_Class_Source

#include "scenum.xih"

SOM_Scope long SOMLINK somtSetSymbolsOnEntry(SOMTEnumEntryC SOMSTAR somSelf,
	                                           /* in */ SOMTEmitC SOMSTAR emitter,
	                                           /* in */ string prefix)
{
  SOMTEnumEntryCData *somThis = SOMTEnumEntryCGetData(somSelf);
  SOMTEnumEntryCMethodDebug("SOMTEnumEntryC","somtSetSymbolsOnEntry");
  
  return 0;
}

SOM_Scope SOMTEnumNameEntryC SOMSTAR SOMLINK somtGetNextEnumName(SOMTEnumEntryC SOMSTAR somSelf)
{
  SOMTEnumEntryCData *somThis = SOMTEnumEntryCGetData(somSelf);
  SOMTEnumEntryCMethodDebug("SOMTEnumEntryC","somtGetNextEnumName");
  
  return NULL;
}

SOM_Scope SOMTEnumNameEntryC SOMSTAR SOMLINK somtGetFirstEnumName(SOMTEnumEntryC SOMSTAR somSelf)
{
  SOMTEnumEntryCData *somThis = SOMTEnumEntryCGetData(somSelf);
  SOMTEnumEntryCMethodDebug("SOMTEnumEntryC","somtGetFirstEnumName");
  
  return NULL;
}
