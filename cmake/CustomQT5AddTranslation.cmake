function(QT5_ADD_TRANSLATION_IDBASED_CUSTOM _qm_files)
    foreach (_current_FILE ${ARGN})
        get_filename_component(_abs_FILE ${_current_FILE} ABSOLUTE)
        set(qm "${_abs_FILE}.qm")
        add_custom_command(OUTPUT ${qm}
                COMMAND ${Qt5_LRELEASE_EXECUTABLE}
                ARGS ${_abs_FILE} -idbased -qm ${qm}
                )
        list(APPEND ${_qm_files} ${qm})
    endforeach ()
    set(${_qm_files} ${${_qm_files}} PARENT_SCOPE)
endfunction()