#
#
# Makefile for kobmon-icinga2mib
# Author: Uwe Ebel ( komaki @ aol . com )
#


default:
	@echo "### Makfile admin (kobmon-icinga2mib) ###"
	@echo "check-env - check the environment"
	@echo "smilint-check - check the mib"
	@echo "smilint-check-strong - stronger check"
	@echo "smidump-create - create some smidumps"

check-env:
	@echo "Start check-env"
	@../bin/kobmon-icinga2mib check-env
	@echo "End check-env"

smilint-check:
	@echo "Start smilint-check, noout means no errors"
	@smilint  -l 3 ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt
	@echo "End smilint-check, if no output, no errors"

smilint-check-strong:
	@echo "Start smilint-check-strong, noout means no errors"
	@smilint -l 6 ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt
	@echo "End smilint-check-strong, if no output, no errors"

smidump-create:
	@echo "Start smidump-create"
	@smidump -f svg ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.svg
	@smidump -f xml ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.xml
	@smidump -f smiv2 ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.smiv2.txt
	@smidump -f sming ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.sming.txt
	@smidump -f perl ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.perl.txt
	@smidump -f sppi ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.sppi.txt
	@smidump -f compliances ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.compliance.txt
	@@smidump -f corba ../share/snmp/mibs/KOBOLDMAKI-ICINGA2-MIB.txt > ../htdocs/KOBOLDMAKI-ICINGA2-MIB.corba.txt
	@mv KOBOLDMAKI_ICINGA2_MIB.idl ../htdocs/KOBOLDMAKI_ICINGA2_MIB.idl.corba.txt
	@mv KOBOLDMAKI_ICINGA2_MIB.oid ../htdocs/KOBOLDMAKI_ICINGA2_MIB.oid.corba.txt
	@echo "End smidump-create"



