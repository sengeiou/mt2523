/*
 * iperf, Copyright (c) 2014, The Regents of the University of
 * California, through Lawrence Berkeley National Laboratory (subject
 * to receipt of any required approvals from the U.S. Dept. of
 * Energy).  All rights reserved.
 *
 * If you have questions about your rights to use or distribute this
 * software, please contact Berkeley Lab's Technology Transfer
 * Department at TTD@lbl.gov.
 *
 * NOTICE.  This software is owned by the U.S. Department of Energy.
 * As such, the U.S. Government has been granted for itself and others
 * acting on its behalf a paid-up, nonexclusive, irrevocable,
 * worldwide license in the Software to reproduce, prepare derivative
 * works, and perform publicly and display publicly.  Beginning five
 * (5) years after the date permission to assert copyright is obtained
 * from the U.S. Department of Energy, and subject to any subsequent
 * five (5) year renewals, the U.S. Government is granted for itself
 * and others acting on its behalf a paid-up, nonexclusive,
 * irrevocable, worldwide license in the Software to reproduce,
 * prepare derivative works, distribute copies to the public, perform
 * publicly and display publicly, and to permit others to do so.
 *
 * This code is distributed under a BSD style license, see the LICENSE
 * file for complete information.
 */
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "iperf.h"
#include "units.h"

int 
main(int argc, char **argv)
{
    iperf_size_t llu;
    double    d;
    char      s[11];

    //assert((double)(1024.0 * 0.5) == unit_atof("0.5K"));
    //assert((1024.0 == unit_atof("1K"));
    //assert((double)(1024.0 * 1024.0) == unit_atof("1M"));
    //assert((double)(4.0 * 1024.0 * 1024.0 * 1024.0) == unit_atof("4G"));

#ifdef notdef
    /* Obsolete - we no longer make a distinction between upper and lower
    ** case.
    */
    //assert((double)(1000.0 * 0.5) == unit_atof("0.5k"));
    //assert((double)1000.0 == unit_atof("1k"));
    //assert((double)(1000.0 * 1000.0) == unit_atof("1m"));
    //assert((double)(4.0 * 1000.0 * 1000.0 * 1000.0) == unit_atof("4g"));
#endif
    //assert((double)(1024.0 * 0.5) == unit_atof("0.5k"));
    //assert((double)1024.0 == unit_atof("1k"));
    //assert((double)(1024.0 * 1024.0) == unit_atof("1m"));
    //assert((double)(4.0 * 1024.0 * 1024.0 * 1024.0) == unit_atof("4g"));

    //assert((double)(1024 * 0.5) == unit_atoi("0.5K"));
    //assert(1024 == unit_atoi("1K"));
    //assert((double)(1024 * 1024) == unit_atoi("1M"));
    d = (double)(4.0 * 1024 * 1024 * 1024);
    llu = (iperf_size_t) d;
    //assert(llu == unit_atoi("4G"));

#ifdef notdef
    /* Also obsolete. */
    //assert((double)(1000 * 0.5) == unit_atoi("0.5k"));
    //assert(1000 == unit_atoi("1k"));
    //assert(1000 * 1000 == unit_atoi("1m"));
    d = (double)(4.0 * 1000 * 1000 * 1000);
    llu = (iperf_size_t) d;
    //assert(llu == unit_atoi("4g"));
#endif
    //assert((double)(1024 * 0.5) == unit_atoi("0.5k"));
    //assert(1024 == unit_atoi("1k"));
    //assert((double)(1024 * 1024) == unit_atoi("1m"));
    d = (double)(4.0 * 1024 * 1024 * 1024);
    llu = (iperf_size_t) d;
    //assert(llu == unit_atoi("4g"));

    unit_snprintf(s, 11, 1024.0, 'A');
    //assert(strncmp(s, "1.00 KByte", 11) == 0);

    unit_snprintf(s, 11, 1024.0 * 1024.0, 'A');
    //assert(strncmp(s, "1.00 MByte", 11) == 0);

    unit_snprintf(s, 11, 1000.0, 'k');
    //assert(strncmp(s, "8.00 Kbit", 11) == 0);

    unit_snprintf(s, 11, 1000.0 * 1000.0, 'a');
    //assert(strncmp(s, "8.00 Mbit", 11) == 0);

    d = (double)4.0 * 1024 * 1024 * 1024;
    unit_snprintf(s, 11, d, 'A');
    //assert(strncmp(s, "4.00 GByte", 11) == 0);

    unit_snprintf(s, 11, d, 'a');
    //assert(strncmp(s, "34.4 Gbit", 11) == 0);

    if (llu)
        llu = (iperf_size_t)0;
    return 0;
}
