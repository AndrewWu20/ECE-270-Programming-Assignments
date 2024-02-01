export PATH := /home/shay/a/ece270/bin:$(PATH)
export LD_LIBRARY_PATH := /home/shay/a/ece270/lib:$(LD_LIBRARY_PATH)

all: test

sim: charbuf.v tb.sv
	iverilog -g2012 -o sim.out charbuf.v tb.sv

view: sim
	vvp sim.out
	gtkwave -a charbuf.gtkw

test: sim
	@if /bin/bash -c "diff <(~ece270/bin/tb-lab-refout | head -n -1) <(vvp sim.out | head -n -1) > /dev/null 2>&1"; then \
		echo "PASS: Output matches exactly."; \
		echo "                              __"; \
 		echo "                          ___/  \\"; \
 		echo "                      ___/       \\_"; \
 		echo "                  ___/             \\"; \
 		echo "              ___/   __/\\           \\"; \
 		echo "          ___/   _   \\   \\           \\"; \
 		echo "      ___/    __/ \\   \\  _\\      ___/|"; \
 		echo " ____/    _/\\      \\   \\/    ___/ _  ("; \
 		echo '/        /  _\\      \\    ___/ _   \\''\\ |'; \
 		echo '|\\  __     /  _      ___/ _   \\''\\  _H_/'; \
 		echo '| \\/  \    \\_/   ___/ _   \\''\\  _H_/ Y'; \
 		echo '|`|  _/      ___/ _   \\''\\  _H_/ Y   !'; \
 		echo ' \\|_|\\   ___/ _   \\''\\  _H_/ Y   !   !'; \
 		echo ' !  | \\_/ _   \\''\\  _H_/ Y   !   !'; \
 		echo ' !  \\` |  \\''\\  _H_/ Y   !   !    '; \
 		echo "     \\\`|  _H_/ Y   !   !        "; \
 		echo "      \\|_/ Y   !   !            "; \
 		echo "           !   !                "; \
 		echo "           !                    "; \
		echo "======================================="; \
		echo "Congratulations! You have completed the"; \
		echo "lab portion of 270. Well done! "; \
		echo "======================================="; \
	else \
		echo "FAIL: Output does not match exactly. See diff output for differences:"; \
		/bin/bash -c "sdiff -w 210 <(~ece270/bin/tb-lab-refout | head -n -1) <(vvp sim.out | head -n -1)"; \
		echo; \
		echo "Lines that have a pipe (|) symbol in the middle have differences."; \
		echo "Lines on the left side are the reference output, and the right side is your testbench output."; \
	fi

clean:
	rm -f sim.out *.vcd
