.. Snob2 documentation master file, created by
   sphinx-quickstart on Mon Oct 25 19:29:42 2021.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

####################################
Snob2 -- Symmetric group FFT library
####################################

.. include:: abstract.rst 

|

.. toctree::
   :maxdepth: 2
   :caption: Contents:

   installation.rst
   design.rst
   combinatorial.rst
   Sn.rst
   SnFunctions.rst
   SnFFT.rst

| 

#########
Reference
#########

.. include:: reference.rst
.. include:: combinatorial_ref.rst
.. include:: Sn_ref.rst
.. include:: SnFunctions_ref.rst
.. include:: SnFFT_ref.rst

|

##################
Indices and tables
##################

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`


.. 
   .. class:: IntegerPartition(part)

   Class to represent an integer partition of an integer n.

   .. method:: getn()

      Return n.

   .. method:: height()

      Return the number of parts.
