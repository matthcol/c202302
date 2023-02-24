
all:
	make -C Vector
	make -C VariadicFunction
	make -C Macros
	make -C GeometryLib
	make -C GeometryApp
	make -C Geometry
	make -C GenericVoidStar
	make -C FunctionPointer
	make -C ContainerCpp
	make -C Basics

clean:
	make -C Vector clean
	make -C VariadicFunction clean
	make -C Macros clean
	make -C GeometryLib clean
	make -C GeometryApp clean
	make -C Geometry clean
	make -C GenericVoidStar clean
	make -C FunctionPointer clean
	make -C ContainerCpp clean
	make -C Basics clean