FROM arm64v8/ubuntu:latest
COPY install_packages.sh /install_packages.sh
RUN chmod +x /install_packages.sh && /install_packages.sh
