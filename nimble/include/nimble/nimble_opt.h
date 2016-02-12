/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_NIMBLE_OPT_
#define H_NIMBLE_OPT_

/** HOST / CONTROLLER: Maximum number of concurrent connections. */

#ifndef NIMBLE_OPT_MAX_CONNECTIONS
#define NIMBLE_OPT_MAX_CONNECTIONS              1
#endif


/**
 * HOST / CONTROLLER: Supported GAP roles.  By default, all four roles are
 * enabled.
 */

#ifndef NIMBLE_OPT_ROLE_CENTRAL
#define NIMBLE_OPT_ROLE_CENTRAL                 1
#endif

#ifndef NIMBLE_OPT_ROLE_PERIPHERAL
#define NIMBLE_OPT_ROLE_PERIPHERAL              1
#endif

#ifndef NIMBLE_OPT_ROLE_BROADCASTER
#define NIMBLE_OPT_ROLE_BROADCASTER             1
#endif

#ifndef NIMBLE_OPT_ROLE_OBSERVER   
#define NIMBLE_OPT_ROLE_OBSERVER                1
#endif

#ifndef NIMBLE_OPT_WHITELIST
#define NIMBLE_OPT_WHITELIST                    1
#endif


/** HOST: Supported GATT procedures.  By default, all are enabled. */

#ifndef NIMBLE_OPT_GATT_DISC_ALL_SVCS
#define NIMBLE_OPT_GATT_DISC_ALL_SVCS           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_SVC_UUID
#define NIMBLE_OPT_GATT_DISC_SVC_UUID           1
#endif

#ifndef NIMBLE_OPT_GATT_FIND_INC_SVCS
#define NIMBLE_OPT_GATT_FIND_INC_SVCS           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_ALL_CHRS
#define NIMBLE_OPT_GATT_DISC_ALL_CHRS           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_CHR_UUID
#define NIMBLE_OPT_GATT_DISC_CHR_UUID           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_ALL_DSCS
#define NIMBLE_OPT_GATT_DISC_ALL_DSCS           1
#endif

#ifndef NIMBLE_OPT_GATT_READ         
#define NIMBLE_OPT_GATT_READ                    1
#endif

#ifndef NIMBLE_OPT_GATT_READ_UUID    
#define NIMBLE_OPT_GATT_READ_UUID               1
#endif

#ifndef NIMBLE_OPT_GATT_READ_LONG    
#define NIMBLE_OPT_GATT_READ_LONG               1
#endif

#ifndef NIMBLE_OPT_GATT_READ_MULT    
#define NIMBLE_OPT_GATT_READ_MULT               1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE_NO_RSP 
#define NIMBLE_OPT_GATT_WRITE_NO_RSP            1
#endif

#ifndef NIMBLE_OPT_GATT_SIGNED_WRITE
#define NIMBLE_OPT_GATT_SIGNED_WRITE            1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE              
#define NIMBLE_OPT_GATT_WRITE                   1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE_LONG         
#define NIMBLE_OPT_GATT_WRITE_LONG              1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE_RELIABLE     
#define NIMBLE_OPT_GATT_WRITE_RELIABLE          1
#endif

#ifndef NIMBLE_OPT_GATT_NOTIFY             
#define NIMBLE_OPT_GATT_NOTIFY                  1
#endif

#ifndef NIMBLE_OPT_GATT_INDICATE           
#define NIMBLE_OPT_GATT_INDICATE                1
#endif


/** HOST: Supported server ATT commands. */

#ifndef NIMBLE_OPT_ATT_SVR_FIND_INFO
#define NIMBLE_OPT_ATT_SVR_FIND_INFO            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_FIND_TYPE
#define NIMBLE_OPT_ATT_SVR_FIND_TYPE            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_TYPE
#define NIMBLE_OPT_ATT_SVR_READ_TYPE            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ
#define NIMBLE_OPT_ATT_SVR_READ                 1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_BLOB
#define NIMBLE_OPT_ATT_SVR_READ_BLOB            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_MULT
#define NIMBLE_OPT_ATT_SVR_READ_MULT            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_GROUP_TYPE
#define NIMBLE_OPT_ATT_SVR_READ_GROUP_TYPE      1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_WRITE
#define NIMBLE_OPT_ATT_SVR_WRITE                1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_WRITE_NO_RSP
#define NIMBLE_OPT_ATT_SVR_WRITE_NO_RSP         1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_SIGNED_WRITE
#define NIMBLE_OPT_ATT_SVR_SIGNED_WRITE         1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_PREP_WRITE
#define NIMBLE_OPT_ATT_SVR_PREP_WRITE           1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_EXEC_WRITE
#define NIMBLE_OPT_ATT_SVR_EXEC_WRITE           1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_NOTIFY  
#define NIMBLE_OPT_ATT_SVR_NOTIFY               1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_INDICATE
#define NIMBLE_OPT_ATT_SVR_INDICATE             1
#endif

/***
 * Compound options; these are generated automatically from the above
 * options.
 */

#undef NIMBLE_OPT_ADVERTISE
#define NIMBLE_OPT_ADVERTISE                    \
    (NIMBLE_OPT_ROLE_BROADCASTER || NIMBLE_OPT_ROLE_PERIPHERAL)

#undef NIMBLE_OPT_SCAN
#define NIMBLE_OPT_SCAN                         \
    (NIMBLE_OPT_ROLE_CENTRAL || NIMBLE_OPT_ROLE_OBSERVER)

#undef NIMBLE_OPT_CONNECT
#define NIMBLE_OPT_CONNECT                      \
    (NIMBLE_OPT_ROLE_CENTRAL || NIMBLE_OPT_ROLE_PERIPHERAL)


/** Supported client ATT commands. */

#undef NIMBLE_OPT_ATT_CLT_FIND_INFO
#define NIMBLE_OPT_ATT_CLT_FIND_INFO            (NIMBLE_OPT_GATT_DISC_ALL_DSCS)

#undef NIMBLE_OPT_ATT_CLT_FIND_TYPE
#define NIMBLE_OPT_ATT_CLT_FIND_TYPE            (NIMBLE_OPT_GATT_DISC_SVC_UUID)

#undef NIMBLE_OPT_ATT_CLT_READ_TYPE
#define NIMBLE_OPT_ATT_CLT_READ_TYPE            \
    (NIMBLE_OPT_GATT_FIND_INC_SVCS ||           \
     NIMBLE_OPT_GATT_DISC_ALL_CHRS ||           \
     NIMBLE_OPT_GATT_DISC_CHRS_UUID ||          \
     NIMBLE_OPT_GATT_READ_UUID)
    
#undef NIMBLE_OPT_ATT_CLT_READ
#define NIMBLE_OPT_ATT_CLT_READ                 \
    (NIMBLE_OPT_GATT_READ ||                    \
     NIMBLE_OPT_GATT_READ_LONG ||               \
     NIMBLE_OPT_GATT_FIND_INC_SVCS)

#undef NIMBLE_OPT_ATT_CLT_READ_BLOB
#define NIMBLE_OPT_ATT_CLT_READ_BLOB            (NIMBLE_OPT_GATT_READ_LONG)

#undef NIMBLE_OPT_ATT_CLT_READ_MULT
#define NIMBLE_OPT_ATT_CLT_READ_MULT            (NIMBLE_OPT_GATT_READ_MULT)

#undef NIMBLE_OPT_ATT_CLT_READ_GROUP_TYPE
#define NIMBLE_OPT_ATT_CLT_READ_GROUP_TYPE      \
    (NIMBLE_OPT_GATT_DISC_ALL_SVCS)

#undef NIMBLE_OPT_ATT_CLT_WRITE
#define NIMBLE_OPT_ATT_CLT_WRITE                (NIMBLE_OPT_GATT_WRITE)

#undef NIMBLE_OPT_ATT_CLT_WRITE_NO_RSP
#define NIMBLE_OPT_ATT_CLT_WRITE_NO_RSP         (NIMBLE_OPT_GATT_WRITE_NO_RSP)

#undef NIMBLE_OPT_ATT_CLT_PREP_WRITE
#define NIMBLE_OPT_ATT_CLT_PREP_WRITE           (NIMBLE_OPT_GATT_WRITE_LONG)

#undef NIMBLE_OPT_ATT_CLT_EXEC_WRITE
#define NIMBLE_OPT_ATT_CLT_EXEC_WRITE           (NIMBLE_OPT_GATT_WRITE_LONG)

#undef NIMBLE_OPT_ATT_CLT_NOTIFY  
#define NIMBLE_OPT_ATT_CLT_NOTIFY               (NIMBLE_OPT_GATT_NOTIFY)

#undef NIMBLE_OPT_ATT_CLT_INDICATE
#define NIMBLE_OPT_ATT_CLT_INDICATE             (NIMBLE_OPT_GATT_INDICATE)

/**
 * Reset GATT based on connect.
 */
#endif
