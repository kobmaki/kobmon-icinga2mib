#!/bin/bash

# netsnmp scli
for i in identifiers tree corba compliances smiv1  smiv2 netsnmp; do
    smidump -f ${i} ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.${i}.txt
done