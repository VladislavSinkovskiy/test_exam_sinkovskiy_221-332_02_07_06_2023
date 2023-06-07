FROM ubuntu
ENV TZ=Europe/Moscow
LABEL maintainer="Vladislav Sinkovskiy"

RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
RUN apt-get update
RUN apt-get -y install qt5-default
RUN apt-get -y install qtbase5-dev
RUN apt-get install qt5-qmake
RUN apt-get -y install build-essential

WORKDIR /echoServer

COPY . /echoServer
RUN qmake echoServer.pro

ENTRYPOINT ["./echoServer"]