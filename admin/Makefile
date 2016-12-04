#
#
# Makefile for kobmon-icinga2mib
# Author: Uwe Ebel ( kobmaki @ aol . com )
#


default:
	@echo "### Makfile admin (kobmon-icinga2mib) ###"
	@echo "check-env - check the environment"
	@echo "smilint-check - check the mib"
	@echo "smilint-check-strong - stronger check"
	@echo "smidump-create - create some smidumps"
	@echo "snmptt-conf - create a snmptt conf file from the mib"

check-env:
	@echo "Start check-env"
	@../bin/kobmon-icinga2mib check-env
	@echo "End check-env"

smilint-check:
	@echo "Start smilint-check, noout means no errors"
	@smilint  -l 3 ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt
	@echo "End smilint-check, if no output, no errors"

smilint-check-strong:
	@echo "Start smilint-check-strong, noout means no errors"
	@smilint -l 6 ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt
	@echo "End smilint-check-strong, if no output, no errors"

smidump-create:
	@echo "Start smidump-create"
	@smidump -f svg ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.svg
	@smidump -f xml ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.xml
	@smidump -f cm ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.dia
#	@smidump -f smiv2 ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.smiv2.txt
	@smidump -f sming ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.sming.txt
	@smidump -f perl ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.perl.txt
	@smidump -f sppi ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.sppi.txt
#	@smidump -f compliances ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.compliance.txt
	@@smidump -f corba ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.corba.txt
#	@@smidump -f identifiers ../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt > ../htdocs/ICINGA-ICINGA2-MIB.identifiers.txt
	@./smidump-create-formats.sh
	@mv ICINGA_ICINGA2_MIB.idl ../htdocs/ICINGA2_MIB.idl.corba.txt
	@mv ICINGA_ICINGA2_MIB.oid ../htdocs/ICINGA2_MIB.oid.corba.txt
	@mv *.c ../htdocs/
	@mv *.h ../htdocs/
	@echo "End smidump-create"

snmptt-conf:
	@echo "Start snmptt-conf"
	@rm ../htdocs/ICINGA-ICINGA2-MIB.snmptt.conf
	@snmpttconvertmib  --in=../share/snmp/mibs/ICINGA-ICINGA2-MIB.txt --out=../htdocs/ICINGA-ICINGA2-MIB.snmptt.conf
	@echo "End snmptt-conf"



