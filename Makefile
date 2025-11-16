# ----- PROJECT INFO -----

PROJ_NAME := libcore
VER := 1.0

# ----- PHONY TARGETS -----

.PHONY: \
	install \
	uninstall

install:
	@cp core.h /usr/local/include/core.h
	@echo "Copied core.h" 
	@echo "${PROJ_NAME} version ${VER} successfully installed"

uninstall:
	@rm /usr/local/include/core.h
	@echo "${PROJ_NAME} successfully uninstalled"
