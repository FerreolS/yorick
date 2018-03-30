FROM alpine

MAINTAINER Ferréol Soulez <ferreol.soulez@univ-lyon1.fr>

RUN echo http://nl.alpinelinux.org/alpine/edge/testing >> /etc/apk/repositories && \
    apk add --update  --no-cache make wget build-base zip rlwrap &&\
    mkdir -p /opt && cd /opt && \
    wget https://github.com/dhmunro/yorick/archive/master.zip &&\
    unzip master.zip && rm master.zip && cd yorick-master &&\
    make install NO_XLIB=yes COPT_DEFAULT=-O2 && mv relocate /opt/yorick && \
    ln -s /opt/yorick/bin/yorick /usr/local/bin/yorick &&\
    apk del make wget build-base zip && \
    touch /opt/yorick/yorick.commands
   

WORKDIR /home/yorick

# sleep 0.1; is a workaround for tty size bug (see https://github.com/moby/moby/issues/28009)
ENTRYPOINT   ["sleep 0.1;rlwrap -s 2000 -c -f /opt/yorick/yorick.commands yorick"]



